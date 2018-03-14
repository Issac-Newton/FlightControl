/********************************************************************************
** Form generated from reading UI file 'ParaSet.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARASET_H
#define UI_PARASET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDial>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowPara
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QGroupBox *groupBox_2;
    QDial *dial;
    QSpinBox *spinBox_3;
    QGroupBox *groupBox_3;
    QSlider *horizontalSlider;
    QSpinBox *spinBox;
    QGroupBox *groupBox;
    QSlider *horizontalSlider_2;
    QSpinBox *spinBox_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindowPara)
    {
        if (MainWindowPara->objectName().isEmpty())
            MainWindowPara->setObjectName(QStringLiteral("MainWindowPara"));
        MainWindowPara->resize(926, 579);
        centralwidget = new QWidget(MainWindowPara);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(810, 20, 91, 51));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(810, 120, 91, 51));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(810, 220, 91, 51));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(810, 320, 91, 51));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(810, 420, 91, 51));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(180, 10, 501, 511));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral("font: 75 italic 18pt \"Palatino Linotype\";"));

        verticalLayout->addWidget(label, 0, Qt::AlignHCenter);

        groupBox_2 = new QGroupBox(verticalLayoutWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setStyleSheet(QLatin1String("border:1px solid black;\n"
"font: 75 13pt \"Bahnschrift\";\n"
"border-radius:20px;"));
        groupBox_2->setFlat(true);
        groupBox_2->setCheckable(false);
        dial = new QDial(groupBox_2);
        dial->setObjectName(QStringLiteral("dial"));
        dial->setGeometry(QRect(110, 13, 191, 101));
        dial->setWrapping(false);
        dial->setNotchTarget(1.7);
        dial->setNotchesVisible(true);
        spinBox_3 = new QSpinBox(groupBox_2);
        spinBox_3->setObjectName(QStringLiteral("spinBox_3"));
        spinBox_3->setGeometry(QRect(400, 60, 71, 21));

        verticalLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(verticalLayoutWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setStyleSheet(QLatin1String("border:1px solid black;\n"
"font: 75 13pt \"Bahnschrift\";\n"
"border-radius:20px;"));
        groupBox_3->setFlat(true);
        horizontalSlider = new QSlider(groupBox_3);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(40, 40, 321, 31));
        horizontalSlider->setStyleSheet(QStringLiteral("border:0px;"));
        horizontalSlider->setOrientation(Qt::Horizontal);
        spinBox = new QSpinBox(groupBox_3);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(410, 49, 61, 21));

        verticalLayout->addWidget(groupBox_3);

        groupBox = new QGroupBox(verticalLayoutWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setStyleSheet(QLatin1String("border:1px solid black;\n"
"font: 75 13pt \"Bahnschrift\";\n"
"border-radius:20px;"));
        groupBox->setFlat(true);
        horizontalSlider_2 = new QSlider(groupBox);
        horizontalSlider_2->setObjectName(QStringLiteral("horizontalSlider_2"));
        horizontalSlider_2->setGeometry(QRect(40, 50, 321, 31));
        horizontalSlider_2->setStyleSheet(QStringLiteral("border:0px;"));
        horizontalSlider_2->setOrientation(Qt::Horizontal);
        spinBox_2 = new QSpinBox(groupBox);
        spinBox_2->setObjectName(QStringLiteral("spinBox_2"));
        spinBox_2->setGeometry(QRect(410, 50, 61, 21));

        verticalLayout->addWidget(groupBox);

        MainWindowPara->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindowPara);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 926, 23));
        MainWindowPara->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindowPara);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindowPara->setStatusBar(statusbar);

        retranslateUi(MainWindowPara);

        QMetaObject::connectSlotsByName(MainWindowPara);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowPara)
    {
        MainWindowPara->setWindowTitle(QApplication::translate("MainWindowPara", "Parameter Set", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindowPara", "Monitor", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindowPara", "ServoSet", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindowPara", "RangeSet", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindowPara", "Mode", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("MainWindowPara", "More", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindowPara", "Parameter Settings", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindowPara", "  Delay Time", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MainWindowPara", "  Step", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindowPara", "  Threshold", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindowPara: public Ui_MainWindowPara {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARASET_H
