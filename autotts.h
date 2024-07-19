#ifndef AUTOTTS_H
#define AUTOTTS_H

#include <QMainWindow>
#include <QTextToSpeech>
#include <QDateTime>
#include <QtMultimedia>
#include <QDir>
QT_BEGIN_NAMESPACE
namespace Ui {
class AutoTTS;
}
QT_END_NAMESPACE

class AutoTTS : public QMainWindow
{
    Q_OBJECT

public:
    AutoTTS(QWidget *parent = nullptr);
    ~AutoTTS();
    void SleepFor(int time);
    QTextToSpeech *tts = nullptr;
    QList<QVoice> voices;
    QList<QString> edgetts_voices = {"Xiaoxiao","Xiaoyi","Yunjian","Yunxi","Yunxia","Yunyang","liaoning-Xiaobei","shannxi-Xiaoni"};
    QString edgetts_voice = "zh-CN-XiaoXiaoNeural";
    QDateTime *Time = nullptr;
    QMediaPlayer *Player = nullptr;
    QAudioOutput *AudioOutput = nullptr;
    QDir *DirOperator = nullptr;

private slots:
    void on_ReadButton_clicked();

    void on_VolumeSlider_valueChanged(int value);

    void on_SeparatingTimeSlider_valueChanged(int value);

    void on_StopButton_clicked();

    void on_VoiceSelector_currentIndexChanged(int index);

    void on_EdgeTTSSelectionButton_clicked();

    void on_LocalTTSSelectionButton_clicked();

    void on_RepeatInput_valueChanged(int arg1);

    void on_ImportButton_triggered();

    void on_SaveButton_triggered();

    void on_AboutButton_triggered();

    void on_HelpButton_triggered();

    void on_AboutQtButton_triggered();

private:
    Ui::AutoTTS *ui;
};
#endif // AUTOTTS_H
