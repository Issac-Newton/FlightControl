/********************************************************************************
** Form generated from reading UI file 'ServoSet.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVOSET_H
#define UI_SERVOSET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDial>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
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

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QFrame *line;
    QComboBox *comboBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QFrame *line_3;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QFrame *line_5;
    QVBoxLayout *verticalLayout_4;
    QDial *dial;
    QDoubleSpinBox *doubleSpinBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QFrame *line_2;
    QSlider *horizontalSlider;
    QSpinBox *spinBox;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(926, 579);
        centralwidget = new QWidget(MainWindow);
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
        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(40, 40, 121, 61));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget_2);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QLatin1String("font: 9pt \"Impact\";\n"
"qproperty-alignment: 'AlignCenter'"));

        verticalLayout_2->addWidget(label);

        line = new QFrame(verticalLayoutWidget_2);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line);

        comboBox = new QComboBox(verticalLayoutWidget_2);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setStyleSheet(QStringLiteral("qproperty-alignment: 'AlignCenter'"));

        verticalLayout_2->addWidget(comboBox);

        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(160, 110, 531, 411));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QStringLiteral("font: 75 16pt \"Constantia\";"));

        verticalLayout->addWidget(label_2, 0, Qt::AlignHCenter);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_2->addWidget(label_4, 0, Qt::AlignHCenter);

        line_3 = new QFrame(verticalLayoutWidget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(line_3);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        groupBox = new QGroupBox(verticalLayoutWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));

        verticalLayout_3->addWidget(groupBox);

        groupBox_2 = new QGroupBox(verticalLayoutWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));

        verticalLayout_3->addWidget(groupBox_2);


        horizontalLayout_2->addLayout(verticalLayout_3);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMaximumSize(QSize(72, 16777215));

        horizontalLayout_3->addWidget(label_5, 0, Qt::AlignHCenter);

        line_5 = new QFrame(verticalLayoutWidget);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setFrameShape(QFrame::VLine);
        line_5->setFrameShadow(QFrame::Sunken);

        horizontalLayout_3->addWidget(line_5);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        dial = new QDial(verticalLayoutWidget);
        dial->setObjectName(QStringLiteral("dial"));
        dial->setMaximumSize(QSize(16777215, 100));
        dial->setWrapping(false);
        dial->setNotchesVisible(true);

        verticalLayout_4->addWidget(dial);

        doubleSpinBox = new QDoubleSpinBox(verticalLayoutWidget);
        doubleSpinBox->setObjectName(QStringLiteral("doubleSpinBox"));
        doubleSpinBox->setSingleStep(0.01);
        doubleSpinBox->setValue(0.14);

        verticalLayout_4->addWidget(doubleSpinBox, 0, Qt::AlignHCenter);


        horizontalLayout_3->addLayout(verticalLayout_4);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3, 0, Qt::AlignHCenter);

        line_2 = new QFrame(verticalLayoutWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_2);

        horizontalSlider = new QSlider(verticalLayoutWidget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);
		horizontalSlider->setMinimum(100);

        horizontalLayout->addWidget(horizontalSlider);

        spinBox = new QSpinBox(verticalLayoutWidget);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setMinimum(100);
        spinBox->setMaximum(100000);
        spinBox->setValue(333);
		QObject::connect(horizontalSlider,SIGNAL(valueChanged(int)),spinBox,SLOT(setValue(int)));
		QObject::connect(spinBox,SIGNAL(valueChanged(int)),horizontalSlider,SLOT(setValue(int)));
        horizontalLayout->addWidget(spinBox);


        verticalLayout->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 926, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Servo Set", Q_NULLPTR));
		QPixmap pixmap = QPixmap("Grey1.jpg").scaled(MainWindow->size());
		QPalette palette(MainWindow->palette());
		palette.setBrush(QPalette::Background, QBrush(pixmap));
		MainWindow->setPalette(palette);

        pushButton->setText(QApplication::translate("MainWindow", "Monitor", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "RangeSet", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "Mode", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "ParaSet", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("MainWindow", "More", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Servo Motor Type", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Analog", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Digital", Q_NULLPTR)
        );
        label_2->setText(QApplication::translate("MainWindow", "Servo Parameters", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        label_4->setWhatsThis(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><br/></p></body></html>", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        label_4->setText(QApplication::translate("MainWindow", "Bandwidth(MicroSecond)", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "Min", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Max", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Speed (s/60)", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Frequent(HZ)", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVOSET_H
