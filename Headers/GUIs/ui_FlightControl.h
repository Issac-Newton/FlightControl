/********************************************************************************
** Form generated from reading UI file 'FlightControl.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLIGHTCONTROL_H
#define UI_FLIGHTCONTROL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FlightControlClass
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QGroupBox *groupBox;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QFrame *line_10;
    QFrame *line_11;
    QLabel *label_7;
    QLabel *label_5;
    QFrame *line;
    QLabel *label_17;
    QFrame *line_9;
    QLabel *label_21;
    QLabel *label_6;
    QLabel *label_8;
    QLabel *label_22;
    QFrame *line_12;
    QFrame *line_8;
    QFrame *line_5;
    QLabel *label_3;
    QFrame *line_7;
    QLabel *label_2;
    QFrame *line_6;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_23;
    QFrame *line_3;
    QFrame *line_4;
    QLabel *label_15;
    QLabel *label_14;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_18;
    QLabel *label_20;
    QFrame *line_2;
    QLabel *label_19;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_16;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *label_27;
    QLabel *label_28;
    QLabel *label_24;
    QGroupBox *groupBox_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *FlightControlClass)
    {
        if (FlightControlClass->objectName().isEmpty())
            FlightControlClass->setObjectName(QStringLiteral("FlightControlClass"));
        FlightControlClass->resize(926, 579);
        centralWidget = new QWidget(FlightControlClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(810, 40, 81, 41));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(810, 120, 81, 41));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(810, 200, 81, 41));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(810, 280, 81, 41));
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(810, 360, 81, 41));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(60, 30, 721, 231));
        groupBox->setStyleSheet(QLatin1String("background-color:rgb(197,193,170);\n"
"font: 75 13pt \"Constantia\";"));
        gridLayoutWidget = new QWidget(groupBox);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 20, 661, 191));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        line_10 = new QFrame(gridLayoutWidget);
        line_10->setObjectName(QStringLiteral("line_10"));
        line_10->setFrameShape(QFrame::VLine);
        line_10->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_10, 1, 8, 1, 1);

        line_11 = new QFrame(gridLayoutWidget);
        line_11->setObjectName(QStringLiteral("line_11"));
        line_11->setFrameShape(QFrame::VLine);
        line_11->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_11, 2, 8, 1, 1);

        label_7 = new QLabel(gridLayoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setStyleSheet(QLatin1String("*{\n"
"border:2px solid black;\n"
"}"));

        gridLayout->addWidget(label_7, 2, 1, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setStyleSheet(QLatin1String("*{\n"
"border:2px solid black;\n"
"}"));

        gridLayout->addWidget(label_5, 0, 1, 1, 1);

        line = new QFrame(gridLayoutWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 1, 2, 1, 1);

        label_17 = new QLabel(gridLayoutWidget);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setStyleSheet(QStringLiteral("font: 9pt \"Fixedsys\";"));

        gridLayout->addWidget(label_17, 0, 6, 1, 1, Qt::AlignHCenter);

        line_9 = new QFrame(gridLayoutWidget);
        line_9->setObjectName(QStringLiteral("line_9"));
        line_9->setFrameShape(QFrame::VLine);
        line_9->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_9, 0, 8, 1, 1);

        label_21 = new QLabel(gridLayoutWidget);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setStyleSheet(QLatin1String("*{\n"
"border:2px solid black;\n"
"}"));

        gridLayout->addWidget(label_21, 1, 7, 1, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setStyleSheet(QLatin1String("*{\n"
"border:2px solid black;\n"
"}"));

        gridLayout->addWidget(label_6, 1, 1, 1, 1);

        label_8 = new QLabel(gridLayoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setStyleSheet(QLatin1String("*{\n"
"border:2px solid black;\n"
"}"));

        gridLayout->addWidget(label_8, 3, 1, 1, 1);

        label_22 = new QLabel(gridLayoutWidget);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setStyleSheet(QLatin1String("*{\n"
"border:2px solid black;\n"
"}"));

        gridLayout->addWidget(label_22, 2, 7, 1, 1);

        line_12 = new QFrame(gridLayoutWidget);
        line_12->setObjectName(QStringLiteral("line_12"));
        line_12->setFrameShape(QFrame::VLine);
        line_12->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_12, 3, 8, 1, 1);

        line_8 = new QFrame(gridLayoutWidget);
        line_8->setObjectName(QStringLiteral("line_8"));
        line_8->setFrameShape(QFrame::VLine);
        line_8->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_8, 3, 5, 1, 1);

        line_5 = new QFrame(gridLayoutWidget);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setFrameShape(QFrame::VLine);
        line_5->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_5, 0, 5, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QStringLiteral("font: 9pt \"Fixedsys\";"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1, Qt::AlignHCenter);

        line_7 = new QFrame(gridLayoutWidget);
        line_7->setObjectName(QStringLiteral("line_7"));
        line_7->setFrameShape(QFrame::VLine);
        line_7->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_7, 2, 5, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QStringLiteral("font: 9pt \"Fixedsys\";"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1, Qt::AlignHCenter);

        line_6 = new QFrame(gridLayoutWidget);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setFrameShape(QFrame::VLine);
        line_6->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_6, 1, 5, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral("font: 9pt \"Fixedsys\";"));

        gridLayout->addWidget(label, 0, 0, 1, 1, Qt::AlignHCenter);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QStringLiteral("font: 9pt \"Fixedsys\";"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1, Qt::AlignHCenter);

        label_23 = new QLabel(gridLayoutWidget);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setStyleSheet(QStringLiteral("font: 9pt \"Fixedsys\";"));

        gridLayout->addWidget(label_23, 0, 9, 1, 1, Qt::AlignHCenter);

        line_3 = new QFrame(gridLayoutWidget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_3, 2, 2, 1, 1);

        line_4 = new QFrame(gridLayoutWidget);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_4, 3, 2, 1, 1);

        label_15 = new QLabel(gridLayoutWidget);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setStyleSheet(QLatin1String("*{\n"
"border:2px solid black;\n"
"}"));

        gridLayout->addWidget(label_15, 2, 4, 1, 1);

        label_14 = new QLabel(gridLayoutWidget);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setStyleSheet(QLatin1String("*{\n"
"border:2px solid black;\n"
"}"));

        gridLayout->addWidget(label_14, 1, 4, 1, 1);

        label_9 = new QLabel(gridLayoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setStyleSheet(QStringLiteral("font: 9pt \"Fixedsys\";"));

        gridLayout->addWidget(label_9, 0, 3, 1, 1, Qt::AlignHCenter);

        label_10 = new QLabel(gridLayoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setStyleSheet(QStringLiteral("font: 9pt \"Fixedsys\";"));

        gridLayout->addWidget(label_10, 1, 3, 1, 1, Qt::AlignHCenter);

        label_11 = new QLabel(gridLayoutWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setStyleSheet(QStringLiteral("font: 9pt \"Fixedsys\";"));

        gridLayout->addWidget(label_11, 2, 3, 1, 1, Qt::AlignHCenter);

        label_18 = new QLabel(gridLayoutWidget);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setStyleSheet(QStringLiteral("font: 9pt \"Fixedsys\";"));

        gridLayout->addWidget(label_18, 1, 6, 1, 1, Qt::AlignHCenter);

        label_20 = new QLabel(gridLayoutWidget);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setStyleSheet(QLatin1String("*{\n"
"border:2px solid black;\n"
"}"));

        gridLayout->addWidget(label_20, 0, 7, 1, 1);

        line_2 = new QFrame(gridLayoutWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 0, 2, 1, 1);

        label_19 = new QLabel(gridLayoutWidget);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setStyleSheet(QStringLiteral("font: 9pt \"Fixedsys\";"));

        gridLayout->addWidget(label_19, 2, 6, 1, 1, Qt::AlignHCenter);

        label_12 = new QLabel(gridLayoutWidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setStyleSheet(QStringLiteral("font: 9pt \"Fixedsys\";"));

        gridLayout->addWidget(label_12, 3, 3, 1, 1, Qt::AlignHCenter);

        label_13 = new QLabel(gridLayoutWidget);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setStyleSheet(QLatin1String("*{\n"
"border:2px solid black;\n"
"}"));

        gridLayout->addWidget(label_13, 0, 4, 1, 1);

        label_16 = new QLabel(gridLayoutWidget);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setStyleSheet(QLatin1String("*{\n"
"border:2px solid black;\n"
"}"));

        gridLayout->addWidget(label_16, 3, 4, 1, 1);

        label_25 = new QLabel(gridLayoutWidget);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setStyleSheet(QStringLiteral("font: 9pt \"Fixedsys\";"));

        gridLayout->addWidget(label_25, 2, 9, 1, 1, Qt::AlignHCenter);

        label_26 = new QLabel(gridLayoutWidget);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setStyleSheet(QLatin1String("*{\n"
"border:2px solid black;\n"
"}"));

        gridLayout->addWidget(label_26, 0, 10, 1, 1);

        label_27 = new QLabel(gridLayoutWidget);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setStyleSheet(QLatin1String("*{\n"
"border:2px solid black;\n"
"}"));

        gridLayout->addWidget(label_27, 1, 10, 1, 1);

        label_28 = new QLabel(gridLayoutWidget);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setStyleSheet(QLatin1String("*{\n"
"border:2px solid black;\n"
"}"));

        gridLayout->addWidget(label_28, 2, 10, 1, 1);

        label_24 = new QLabel(gridLayoutWidget);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setStyleSheet(QStringLiteral("font: 9pt \"Fixedsys\";"));

        gridLayout->addWidget(label_24, 1, 9, 1, 1, Qt::AlignHCenter);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(70, 290, 661, 191));
        groupBox_2->setStyleSheet(QLatin1String("background-color:rgb(204,204,204);\n"
"font: 75 13pt \"Constantia\";"));
        FlightControlClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(FlightControlClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 926, 23));
        FlightControlClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(FlightControlClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        FlightControlClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(FlightControlClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        FlightControlClass->setStatusBar(statusBar);

        retranslateUi(FlightControlClass);

        QMetaObject::connectSlotsByName(FlightControlClass);
    } // setupUi

    void retranslateUi(QMainWindow *FlightControlClass)
    {
        FlightControlClass->setWindowTitle(QApplication::translate("FlightControlClass", "FlightControl", Q_NULLPTR));
		QPixmap pixmap = QPixmap("Grey1.jpg").scaled(FlightControlClass->size());
		QPalette palette(FlightControlClass->palette());   
		palette.setBrush(QPalette::Background, QBrush(pixmap));
		FlightControlClass->setPalette(palette);

        pushButton->setText(QApplication::translate("FlightControlClass", "ServoSet", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("FlightControlClass", "RangeSet", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("FlightControlClass", "Mode", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("FlightControlClass", "ParaSet", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("FlightControlClass", "More", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("FlightControlClass", "Flight Data", Q_NULLPTR));
        label_7->setText(QString());
        label_5->setText(QString());
        label_17->setText(QApplication::translate("FlightControlClass", "Accele_X", Q_NULLPTR));
        label_21->setText(QString());
        label_6->setText(QString());
        label_8->setText(QString());
        label_22->setText(QString());
        label_3->setText(QApplication::translate("FlightControlClass", "Servo3PWM", Q_NULLPTR));
        label_2->setText(QApplication::translate("FlightControlClass", "Servo2PWM", Q_NULLPTR));
        label->setText(QApplication::translate("FlightControlClass", "Servo1PWM", Q_NULLPTR));
        label_4->setText(QApplication::translate("FlightControlClass", "Servo4PWM", Q_NULLPTR));
        label_23->setText(QApplication::translate("FlightControlClass", "Roll", Q_NULLPTR));
        label_15->setText(QString());
        label_14->setText(QString());
        label_9->setText(QApplication::translate("FlightControlClass", "Pressure1", Q_NULLPTR));
        label_10->setText(QApplication::translate("FlightControlClass", "Pressure2", Q_NULLPTR));
        label_11->setText(QApplication::translate("FlightControlClass", "Pressure3", Q_NULLPTR));
        label_18->setText(QApplication::translate("FlightControlClass", "Accele_Y", Q_NULLPTR));
        label_20->setText(QString());
        label_19->setText(QApplication::translate("FlightControlClass", "Accele_Z", Q_NULLPTR));
        label_12->setText(QApplication::translate("FlightControlClass", "Pressure4", Q_NULLPTR));
        label_13->setText(QString());
        label_16->setText(QString());
        label_25->setText(QApplication::translate("FlightControlClass", "Pitch", Q_NULLPTR));
        label_26->setText(QString());
        label_27->setText(QString());
        label_28->setText(QString());
        label_24->setText(QApplication::translate("FlightControlClass", "Yaw", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("FlightControlClass", "Flight States", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FlightControlClass: public Ui_FlightControlClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLIGHTCONTROL_H
