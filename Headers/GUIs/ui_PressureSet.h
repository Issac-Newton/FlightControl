/********************************************************************************
** Form generated from reading UI file 'PressureSet.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRESSURESET_H
#define UI_PRESSURESET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowPre
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
    QGroupBox *groupBox;
    QLabel *label;
    QGroupBox *groupBox_2;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindowPre)
    {
        if (MainWindowPre->objectName().isEmpty())
            MainWindowPre->setObjectName(QStringLiteral("MainWindowPre"));
        MainWindowPre->resize(926, 579);
        centralwidget = new QWidget(MainWindowPre);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(810, 40, 81, 41));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(810, 120, 81, 41));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(810, 200, 81, 41));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(810, 280, 81, 41));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(810, 360, 81, 41));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(120, 70, 581, 391));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(verticalLayoutWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setStyleSheet(QStringLiteral("font: 11pt \"Georgia\";"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 50, 471, 21));

        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(verticalLayoutWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setStyleSheet(QStringLiteral("font: 11pt \"Georgia\";"));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 50, 471, 21));

        verticalLayout->addWidget(groupBox_2);

        MainWindowPre->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindowPre);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 926, 23));
        MainWindowPre->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindowPre);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindowPre->setStatusBar(statusbar);

        retranslateUi(MainWindowPre);

        QMetaObject::connectSlotsByName(MainWindowPre);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowPre)
    {
        MainWindowPre->setWindowTitle(QApplication::translate("MainWindowPre", "Mode Choose", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindowPre", "Monitor", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindowPre", "ServoSet", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindowPre", "RangeSet", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindowPre", "ParaSet", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("MainWindowPre", "More", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindowPre", "Special Landing Test", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindowPre", "The mode is for Craft's one leg broken,test three legs landing function.", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindowPre", "Hard Landing Protection", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindowPre", "The mode is for testing Craft's hand landing protection.", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindowPre: public Ui_MainWindowPre {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRESSURESET_H
