#include "autotts.h"
#include "./ui_autotts.h"
#include <QTextToSpeech>
#include <QThread>
#include <QTimer>
#include <QProcess>
#include <QFileDialog>
#include <QMessageBox>
#include <QtConcurrent/QtConcurrentRun>
#pragma execution_character_set("utf-8")
using namespace Qt::StringLiterals;
bool isStopButtonClicked = false;
bool isLocalTTS = true;
const QString VERSION = "1.0.1";
AutoTTS::AutoTTS(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::AutoTTS)
{
    ui->setupUi(this);
    ui -> LocalTTSSelectionButton -> click();
    Time = new QDateTime();
    Player = new QMediaPlayer;
    AudioOutput = new QAudioOutput;
    Player -> setAudioOutput(AudioOutput);
    DirOperator = new QDir();
    DirOperator -> cd(DirOperator -> tempPath());
    DirOperator -> mkdir("AutoTTS");
    // qDebug() << DirOperator -> tempPath();
}

void AutoTTS::SleepFor(int time) {
    QTimer timer;
    // timer.setSingleShot(true);
    timer.setInterval(time);
    QEventLoop loop;
    AutoTTS::connect(&timer, SIGNAL(timeout()), &loop, SLOT(quit()));
    timer.start();
    loop.exec();
}

AutoTTS::~AutoTTS()
{
    delete ui;
}

void AutoTTS::on_ReadButton_clicked()
{
    QString Text = ui -> TextToRead -> toPlainText().trimmed();
    if (Text == "") {
        ui -> statusbar -> showMessage("未输入内容！");
        return;
    }
    QList<QString> Texts = Text.split(' ');
    ui -> ReadButton -> setEnabled(false);
    ui -> StopButton -> setEnabled(true);
    ui -> VoiceSelector -> setEnabled(false);
    ui -> EdgeTTSSelectionButton -> setEnabled(false);
    ui -> LocalTTSSelectionButton -> setEnabled(false);
    ui -> TextToRead -> setFocus();
    ui -> TextToRead -> moveCursor(QTextCursor::Start);
    ui -> FormatButton -> setEnabled(false);
    ui -> TextToRead -> setEnabled(false);
    if (isLocalTTS) {
        if (tts -> state() == QTextToSpeech::Ready) {
            for (int i = 0; i < Texts.length(); i++) {
                if (isStopButtonClicked) {
                    isStopButtonClicked = false;
                    ui -> statusbar -> showMessage("听写已取消");
                    break;
                }
                QString status = "正在听写 " + Texts[i] + ':' + QString::number(i + 1) + " / " + QString::number(Texts.length());
                ui -> statusbar -> showMessage(status);
                tts -> setVolume((double)(ui -> VolumeSlider -> value()) / 100.0);
                ui -> TextToRead -> find(Texts[i]);
                for (int j = 0; j < ui -> RepeatInput -> value(); j++) {
                    tts -> say(Texts[i]);
                    AutoTTS::SleepFor(2000);
                    if (isStopButtonClicked) {
                        isStopButtonClicked = false;
                        ui -> statusbar -> showMessage("听写已取消");
                        goto exitRead;
                    }
                }
                if (i != Texts.length() - 1)
                    for (int j = 0; j < ((ui -> SeparatingTimeSlider -> value()) - (ui -> RepeatInput -> value()) * 2) * 1000; j += 100) {
                        AutoTTS::SleepFor(100);
                        if (isStopButtonClicked) {
                            isStopButtonClicked = false;
                            ui -> statusbar -> showMessage("听写已取消");
                            goto exitRead;
                        }
                    }
                ui -> statusbar -> showMessage("听写完成");
            }
        }
    }
    else {
        for (int i = 0; i < Texts.length(); i++) {
            if (isStopButtonClicked) {
                isStopButtonClicked = false;
                ui -> statusbar -> showMessage("听写已取消");
                break;
            }
            QString status = "正在听写 " + Texts[i] + ':' + QString::number(i + 1) + " / " + QString::number(Texts.length());
            ui -> statusbar -> showMessage(status);
            QString command = "edge-tts";
            command += (" -v " + edgetts_voice);
            command += (" -t " + Texts[i]);
            QString currentFilePath = DirOperator -> tempPath() + "/AutoTTS/" + QString::number(Time -> currentSecsSinceEpoch()) + ".mp3";
            command += (" --write-media " + currentFilePath);
            AudioOutput -> setVolume(ui -> VolumeSlider -> value());
            // qDebug() << command;
            ui -> TextToRead -> find(Texts[i]);
            QProcess process;
            process.startCommand(command);
            process.waitForFinished();
            Player -> setSource(QUrl::fromLocalFile(currentFilePath));
            for (int j = 0; j < ui -> RepeatInput -> value(); j++) {
                Player -> play();
                AutoTTS::SleepFor(2000);
                if (isStopButtonClicked) {
                    isStopButtonClicked = false;
                    ui -> statusbar -> showMessage("听写已取消");
                    goto exitRead;
                }
            }
            if (i != Texts.length() - 1)
                for (int j = 0; j < ((ui -> SeparatingTimeSlider -> value()) - (ui -> RepeatInput -> value()) * 2) * 1000; j += 100) {
                    AutoTTS::SleepFor(100);
                    if (isStopButtonClicked) {
                        isStopButtonClicked = false;
                        ui -> statusbar -> showMessage("听写已取消");
                        goto exitRead;
                    }
                }
            ui -> statusbar -> showMessage("听写完成");
        }
    }
exitRead:
    ui -> TextToRead -> moveCursor(QTextCursor::End);
    ui -> ReadButton -> setEnabled(true);
    ui -> StopButton -> setEnabled(false);
    ui -> VoiceSelector -> setEnabled(true);
    ui -> EdgeTTSSelectionButton -> setEnabled(true);
    ui -> LocalTTSSelectionButton -> setEnabled(true);
    ui -> FormatButton -> setEnabled(true);
    ui -> TextToRead -> setEnabled(true);
}


void AutoTTS::on_VolumeSlider_valueChanged(int value)
{
    ui -> SelectedVolumeLabel -> setText(QString::number(value));
}


void AutoTTS::on_SeparatingTimeSlider_valueChanged(int value)
{
    ui -> SelectedTimeLabel -> setText(QString::number(value));
}


void AutoTTS::on_StopButton_clicked()
{
    isStopButtonClicked = true;
}


void AutoTTS::on_VoiceSelector_currentIndexChanged(int index)
{
    if (isLocalTTS) tts -> setVoice(voices.at(index));
    else edgetts_voice = "zh-CN-" + (ui -> VoiceSelector -> currentText()) + "Neural";
}


void AutoTTS::on_EdgeTTSSelectionButton_clicked()
{
    isLocalTTS=false;
    ui -> VoiceSelector -> clear();
    ui -> VoiceSelector -> addItems(edgetts_voices);

}


void AutoTTS::on_LocalTTSSelectionButton_clicked()
{

    ui -> VoiceSelector -> clear();
    tts = new QTextToSpeech(this);
    voices = tts -> availableVoices();
    QVoice CurrentVoice = tts -> voice();
    for (const QVoice &voice: std::as_const(voices)) {
        ui -> VoiceSelector -> addItem(u"%1 - %2 - %3"_s.arg(voice.name(), QVoice::genderName(voice.gender()), QVoice::ageName(voice.age())));
        if (voice.name() == CurrentVoice.name()) ui -> VoiceSelector -> setCurrentIndex(ui -> VoiceSelector -> count() - 1);
    }
    isLocalTTS = true;
}

void AutoTTS::on_RepeatInput_valueChanged(int arg1)
{
    ui -> SeparatingTimeSlider -> setMinimum(arg1 * 2 + 1);
}


void AutoTTS::on_ImportButton_triggered()
{
    QString fileToOpen = QFileDialog::getOpenFileName(this, "打开文件", DirOperator -> homePath(), "文本文档 (*.txt)");
    // qDebug() << fileToOpen;
    QFile file(fileToOpen);
    file.open(QIODevice::ReadOnly);
    ui -> TextToRead -> setText(file.readAll());
    file.close();
}


void AutoTTS::on_SaveButton_triggered()
{
    QString fileToOpen = QFileDialog::getSaveFileName(this, "打开文件", DirOperator -> homePath(), "文本文档 (*.txt)");
    // qDebug() << fileToOpen;
    QFile file(fileToOpen);
    file.open(QIODevice::WriteOnly);
    QTextStream stream(&file);
    stream << ui -> TextToRead -> toPlainText();
    file.close();
}


void AutoTTS::on_AboutButton_triggered()
{
    QMessageBox::about(this, "关于", "自动听写软件\nVersion " + VERSION + "\n作者 panjk0518\n本软件使用了以下库：\nQt 6.8.0\nedge-tts 作者 rany2 (https://github.com/rany2/edge-tts)\n本软件以 GNU GPL 3.0 发布。详见 https://www.gnu.org/licenses/gpl-3.0.html#license-text");
}


void AutoTTS::on_HelpButton_triggered()
{
    QMessageBox::information(this, "帮助", "本软件使用 edge-tts 作为在线 TTS 引擎。在使用在线 TTS 前，请先配置运行环境：\n1. 安装 Python: https://www.python.org/downloads/\n2. 安装 edge-tts: 按下键盘上的 Windows 键 + X 键，之后在弹出的菜单中单击“终端管理员”或“Windows Powershell（管理员）”，在弹出的终端窗口中输入 python -m pip install edge-tts 并回车运行。如无法访问或下载速度较慢，可尝试 python -m pip install -i https://pypi.tuna.tsinghua.edu.cn/simple edge-tts\n现在，您应该可以正常使用在线 TTS 了。");
}


void AutoTTS::on_AboutQtButton_triggered()
{
    QMessageBox::aboutQt(this, "About Qt");
}


void AutoTTS::on_FormatButton_clicked()
{
    QString TextToRead = ui -> TextToRead -> toPlainText();
    QtConcurrent::run([&]() {
        TextToRead.replace("，", " ");
        TextToRead.replace(",", " ");
        TextToRead.replace("\n", " ");
    });
    ui -> TextToRead -> setText(TextToRead);
}

