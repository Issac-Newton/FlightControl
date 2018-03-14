/********************************************************************************
** Form generated from reading UI file 'More.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MORE_H
#define UI_MORE_H

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

class Ui_MainWindowMore
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QGroupBox *groupBox_3;
    QGroupBox *groupBox_2;
    QGroupBox *groupBox_4;
    QGroupBox *groupBox;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindowMore)
    {
        if (MainWindowMore->objectName().isEmpty())
            MainWindowMore->setObjectName(QStringLiteral("MainWindowMore"));
        MainWindowMore->resize(926, 579);
        centralwidget = new QWidget(MainWindowMore);
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
        verticalLayoutWidget->setGeometry(QRect(100, -20, 571, 551));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral("font: 87 14pt \"Segoe UI Black\";"));

        verticalLayout_2->addWidget(label, 0, Qt::AlignHCenter);

        groupBox_3 = new QGroupBox(verticalLayoutWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setStyleSheet(QLatin1String("border:2px solid #080808;\n"
"border-radius:25px;\n"
"font: 11pt \"Fixedsys\";\n"
"          background:#EEE9BF;"));

        verticalLayout_2->addWidget(groupBox_3);

        groupBox_2 = new QGroupBox(verticalLayoutWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setStyleSheet(QLatin1String("border:2px solid #080808;\n"
"border-radius:25px;\n"
"font: 11pt \"Fixedsys\";\n"
"          background:#EEE9BF;"));

        verticalLayout_2->addWidget(groupBox_2);

        groupBox_4 = new QGroupBox(verticalLayoutWidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setStyleSheet(QLatin1String("border:2px solid #080808;\n"
"border-radius:25px;\n"
"font: 11pt \"Fixedsys\";\n"
"          background:#EEE9BF;"));

        verticalLayout_2->addWidget(groupBox_4);

        groupBox = new QGroupBox(verticalLayoutWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setStyleSheet(QLatin1String("border:2px solid #080808;\n"
"border-radius:25px;\n"
"font: 11pt \"Fixedsys\";\n"
"          background:#EEE9BF;"));

        verticalLayout_2->addWidget(groupBox);

        MainWindowMore->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindowMore);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 926, 23));
        MainWindowMore->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindowMore);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindowMore->setStatusBar(statusbar);

        retranslateUi(MainWindowMore);

        QMetaObject::connectSlotsByName(MainWindowMore);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowMore)
    {
        MainWindowMore->setWindowTitle(QApplication::translate("MainWindowMore", "More Function", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindowMore", "Monitor", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindowMore", "ServoSet", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindowMore", "RangeSet", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindowMore", "Mode", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("MainWindowMore", "ParaSet", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindowMore", "\n"
"More Function", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MainWindowMore", " Distance Sensor ", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindowMore", " Fault Detection ", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("MainWindowMore", " No Landing ", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindowMore", " False Safe ", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindowMore: public Ui_MainWindowMore {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MORE_H
