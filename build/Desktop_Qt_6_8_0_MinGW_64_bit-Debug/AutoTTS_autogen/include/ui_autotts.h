/********************************************************************************
** Form generated from reading UI file 'autotts.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTOTTS_H
#define UI_AUTOTTS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AutoTTS
{
public:
    QAction *ImportButton;
    QAction *SaveButton;
    QAction *HelpButton;
    QAction *AboutButton;
    QAction *AboutQtButton;
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QTextEdit *TextToRead;
    QVBoxLayout *verticalLayout_2;
    QPushButton *ReadButton;
    QPushButton *StopButton;
    QLabel *label;
    QHBoxLayout *horizontalLayout_3;
    QLabel *RepeatLabel;
    QSpinBox *RepeatInput;
    QHBoxLayout *horizontalLayout;
    QLabel *VolumeLabel;
    QLabel *SelectedVolumeLabel;
    QSlider *VolumeSlider;
    QHBoxLayout *horizontalLayout_2;
    QLabel *SeparatingTimeLabel;
    QLabel *SelectedTimeLabel;
    QSlider *SeparatingTimeSlider;
    QLabel *VoiceLabel;
    QComboBox *VoiceSelector;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QRadioButton *EdgeTTSSelectionButton;
    QRadioButton *LocalTTSSelectionButton;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AutoTTS)
    {
        if (AutoTTS->objectName().isEmpty())
            AutoTTS->setObjectName("AutoTTS");
        AutoTTS->resize(800, 600);
        ImportButton = new QAction(AutoTTS);
        ImportButton->setObjectName("ImportButton");
        SaveButton = new QAction(AutoTTS);
        SaveButton->setObjectName("SaveButton");
        HelpButton = new QAction(AutoTTS);
        HelpButton->setObjectName("HelpButton");
        AboutButton = new QAction(AutoTTS);
        AboutButton->setObjectName("AboutButton");
        AboutQtButton = new QAction(AutoTTS);
        AboutQtButton->setObjectName("AboutQtButton");
        centralwidget = new QWidget(AutoTTS);
        centralwidget->setObjectName("centralwidget");
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName("gridLayout_2");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        TextToRead = new QTextEdit(centralwidget);
        TextToRead->setObjectName("TextToRead");
        TextToRead->setAutoFillBackground(false);

        horizontalLayout_4->addWidget(TextToRead);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        ReadButton = new QPushButton(centralwidget);
        ReadButton->setObjectName("ReadButton");

        verticalLayout_2->addWidget(ReadButton);

        StopButton = new QPushButton(centralwidget);
        StopButton->setObjectName("StopButton");
        StopButton->setEnabled(false);

        verticalLayout_2->addWidget(StopButton);

        label = new QLabel(centralwidget);
        label->setObjectName("label");

        verticalLayout_2->addWidget(label);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        RepeatLabel = new QLabel(centralwidget);
        RepeatLabel->setObjectName("RepeatLabel");

        horizontalLayout_3->addWidget(RepeatLabel);

        RepeatInput = new QSpinBox(centralwidget);
        RepeatInput->setObjectName("RepeatInput");
        RepeatInput->setMinimum(1);
        RepeatInput->setMaximum(5);
        RepeatInput->setValue(2);

        horizontalLayout_3->addWidget(RepeatInput);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        VolumeLabel = new QLabel(centralwidget);
        VolumeLabel->setObjectName("VolumeLabel");

        horizontalLayout->addWidget(VolumeLabel);

        SelectedVolumeLabel = new QLabel(centralwidget);
        SelectedVolumeLabel->setObjectName("SelectedVolumeLabel");
        SelectedVolumeLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(SelectedVolumeLabel);


        verticalLayout_2->addLayout(horizontalLayout);

        VolumeSlider = new QSlider(centralwidget);
        VolumeSlider->setObjectName("VolumeSlider");
        VolumeSlider->setMaximum(100);
        VolumeSlider->setValue(100);
        VolumeSlider->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(VolumeSlider);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        SeparatingTimeLabel = new QLabel(centralwidget);
        SeparatingTimeLabel->setObjectName("SeparatingTimeLabel");

        horizontalLayout_2->addWidget(SeparatingTimeLabel);

        SelectedTimeLabel = new QLabel(centralwidget);
        SelectedTimeLabel->setObjectName("SelectedTimeLabel");
        SelectedTimeLabel->setToolTipDuration(-1);
        SelectedTimeLabel->setLayoutDirection(Qt::LeftToRight);
        SelectedTimeLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(SelectedTimeLabel);


        verticalLayout_2->addLayout(horizontalLayout_2);

        SeparatingTimeSlider = new QSlider(centralwidget);
        SeparatingTimeSlider->setObjectName("SeparatingTimeSlider");
        SeparatingTimeSlider->setMinimum(5);
        SeparatingTimeSlider->setMaximum(20);
        SeparatingTimeSlider->setPageStep(5);
        SeparatingTimeSlider->setValue(5);
        SeparatingTimeSlider->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(SeparatingTimeSlider);

        VoiceLabel = new QLabel(centralwidget);
        VoiceLabel->setObjectName("VoiceLabel");

        verticalLayout_2->addWidget(VoiceLabel);

        VoiceSelector = new QComboBox(centralwidget);
        VoiceSelector->setObjectName("VoiceSelector");

        verticalLayout_2->addWidget(VoiceSelector);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        EdgeTTSSelectionButton = new QRadioButton(groupBox);
        EdgeTTSSelectionButton->setObjectName("EdgeTTSSelectionButton");

        verticalLayout->addWidget(EdgeTTSSelectionButton);

        LocalTTSSelectionButton = new QRadioButton(groupBox);
        LocalTTSSelectionButton->setObjectName("LocalTTSSelectionButton");

        verticalLayout->addWidget(LocalTTSSelectionButton);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        verticalLayout_2->addWidget(groupBox);

        verticalLayout_2->setStretch(0, 1);
        verticalLayout_2->setStretch(1, 1);
        verticalLayout_2->setStretch(2, 1000000000);
        verticalLayout_2->setStretch(3, 1);
        verticalLayout_2->setStretch(4, 1);
        verticalLayout_2->setStretch(5, 1);
        verticalLayout_2->setStretch(6, 1);
        verticalLayout_2->setStretch(7, 1);
        verticalLayout_2->setStretch(8, 1);
        verticalLayout_2->setStretch(9, 1);
        verticalLayout_2->setStretch(10, 1);

        horizontalLayout_4->addLayout(verticalLayout_2);

        horizontalLayout_4->setStretch(0, 2);
        horizontalLayout_4->setStretch(1, 1);

        gridLayout_2->addLayout(horizontalLayout_4, 0, 0, 1, 1);

        AutoTTS->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AutoTTS);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 17));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName("menu_2");
        AutoTTS->setMenuBar(menubar);
        statusbar = new QStatusBar(AutoTTS);
        statusbar->setObjectName("statusbar");
        AutoTTS->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menu->addAction(ImportButton);
        menu->addAction(SaveButton);
        menu_2->addAction(HelpButton);
        menu_2->addAction(AboutButton);
        menu_2->addAction(AboutQtButton);

        retranslateUi(AutoTTS);

        QMetaObject::connectSlotsByName(AutoTTS);
    } // setupUi

    void retranslateUi(QMainWindow *AutoTTS)
    {
        AutoTTS->setWindowTitle(QCoreApplication::translate("AutoTTS", "AutoTTS", nullptr));
        ImportButton->setText(QCoreApplication::translate("AutoTTS", "\345\257\274\345\205\245", nullptr));
        SaveButton->setText(QCoreApplication::translate("AutoTTS", "\344\277\235\345\255\230", nullptr));
        HelpButton->setText(QCoreApplication::translate("AutoTTS", "\345\270\256\345\212\251", nullptr));
        AboutButton->setText(QCoreApplication::translate("AutoTTS", "\345\205\263\344\272\216", nullptr));
        AboutQtButton->setText(QCoreApplication::translate("AutoTTS", "\345\205\263\344\272\216 Qt", nullptr));
#if QT_CONFIG(tooltip)
        TextToRead->setToolTip(QCoreApplication::translate("AutoTTS", "\350\257\267\344\273\245\347\251\272\346\240\274\345\210\206\351\232\224\350\257\215\350\257\255", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        TextToRead->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
        ReadButton->setText(QCoreApplication::translate("AutoTTS", "\350\257\273\345\207\272\346\226\207\345\255\227", nullptr));
        StopButton->setText(QCoreApplication::translate("AutoTTS", "\345\201\234\346\255\242", nullptr));
        label->setText(QString());
#if QT_CONFIG(tooltip)
        RepeatLabel->setToolTip(QCoreApplication::translate("AutoTTS", "<html><head/><body><p>\344\270\244\346\254\241\350\257\273\350\257\215\344\271\213\351\227\264\351\227\264\351\232\224 1 \347\247\222</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        RepeatLabel->setText(QCoreApplication::translate("AutoTTS", "\351\207\215\345\244\215\346\254\241\346\225\260", nullptr));
        VolumeLabel->setText(QCoreApplication::translate("AutoTTS", "\351\237\263\351\207\217", nullptr));
        SelectedVolumeLabel->setText(QCoreApplication::translate("AutoTTS", "100", nullptr));
        SeparatingTimeLabel->setText(QCoreApplication::translate("AutoTTS", "\351\227\264\351\232\224\346\227\266\351\227\264", nullptr));
        SelectedTimeLabel->setText(QCoreApplication::translate("AutoTTS", "5", nullptr));
        VoiceLabel->setText(QCoreApplication::translate("AutoTTS", "\351\200\211\346\213\251\350\257\255\351\237\263", nullptr));
        groupBox->setTitle(QCoreApplication::translate("AutoTTS", "\351\200\211\346\213\251\346\234\227\350\257\273\345\274\225\346\223\216", nullptr));
        EdgeTTSSelectionButton->setText(QCoreApplication::translate("AutoTTS", "\345\234\250\347\272\277\357\274\210Edge TTS\357\274\211", nullptr));
        LocalTTSSelectionButton->setText(QCoreApplication::translate("AutoTTS", "\346\234\254\345\234\260\357\274\210\347\263\273\347\273\237\357\274\211", nullptr));
        menu->setTitle(QCoreApplication::translate("AutoTTS", "\346\226\207\344\273\266", nullptr));
        menu_2->setTitle(QCoreApplication::translate("AutoTTS", "\345\270\256\345\212\251", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AutoTTS: public Ui_AutoTTS {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTOTTS_H
