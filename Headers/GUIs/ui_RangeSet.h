/********************************************************************************
** Form generated from reading UI file 'RangeSet.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RANGESET_H
#define UI_RANGESET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QGroupBox *groupBox_4;
    QLabel *label_2;
    QFrame *line;
    QLabel *label_3;
    QSlider *horizontalSlider;
    QSlider *horizontalSlider_2;
    QSpinBox *spinBox;
    QSpinBox *spinBox_2;
    QRadioButton *radioButton;
    QFrame *line_7;
    QGroupBox *groupBox_6;
    QLabel *label_6;
    QFrame *line_3;
    QLabel *label_7;
    QSlider *horizontalSlider_5;
    QSlider *horizontalSlider_6;
    QSpinBox *spinBox_5;
    QSpinBox *spinBox_6;
    QRadioButton *radioButton_3;
    QFrame *line_8;
    QGroupBox *groupBox_7;
    QLabel *label_12;
    QFrame *line_6;
    QLabel *label_13;
    QSlider *horizontalSlider_11;
    QSlider *horizontalSlider_12;
    QSpinBox *spinBox_11;
    QSpinBox *spinBox_12;
    QRadioButton *radioButton_6;
    QFrame *line_9;
    QGroupBox *groupBox_5;
    QLabel *label_10;
    QFrame *line_5;
    QLabel *label_11;
    QSlider *horizontalSlider_9;
    QSlider *horizontalSlider_10;
    QSpinBox *spinBox_9;
    QSpinBox *spinBox_10;
    QRadioButton *radioButton_5;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QStringLiteral("Form"));
        Form->resize(926, 579);
        pushButton = new QPushButton(Form);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(810, 40, 81, 41));
        pushButton_2 = new QPushButton(Form);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(810, 120, 81, 41));
        pushButton_3 = new QPushButton(Form);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(810, 200, 81, 41));
        pushButton_4 = new QPushButton(Form);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(810, 280, 81, 41));
        pushButton_5 = new QPushButton(Form);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(810, 360, 81, 41));
        verticalLayoutWidget = new QWidget(Form);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(39, 29, 561, 511));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label, 0, Qt::AlignHCenter);

        groupBox_4 = new QGroupBox(verticalLayoutWidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        label_2 = new QLabel(groupBox_4);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 20, 54, 12));
        line = new QFrame(groupBox_4);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(10, 40, 391, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_3 = new QLabel(groupBox_4);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 60, 54, 12));
        horizontalSlider = new QSlider(groupBox_4);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(89, 20, 251, 22));
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider->setTickPosition(QSlider::NoTicks);
        horizontalSlider_2 = new QSlider(groupBox_4);
        horizontalSlider_2->setObjectName(QStringLiteral("horizontalSlider_2"));
        horizontalSlider_2->setGeometry(QRect(89, 60, 251, 22));
        horizontalSlider_2->setOrientation(Qt::Horizontal);
        spinBox = new QSpinBox(groupBox_4);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(350, 20, 42, 22));
        spinBox_2 = new QSpinBox(groupBox_4);
        spinBox_2->setObjectName(QStringLiteral("spinBox_2"));
        spinBox_2->setGeometry(QRect(350, 60, 42, 22));
		QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), spinBox, SLOT(setValue(int)));
		QObject::connect(spinBox,SIGNAL(valueChanged(int)),horizontalSlider,SLOT(setValue(int)));
		QObject::connect(horizontalSlider_2, SIGNAL(valueChanged(int)), spinBox_2, SLOT(setValue(int)));
		QObject::connect(spinBox_2, SIGNAL(valueChanged(int)), horizontalSlider_2, SLOT(setValue(int)));
        radioButton = new QRadioButton(groupBox_4);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(420, 40, 89, 16));

        verticalLayout->addWidget(groupBox_4);

        line_7 = new QFrame(verticalLayoutWidget);
        line_7->setObjectName(QStringLiteral("line_7"));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_7);

        groupBox_6 = new QGroupBox(verticalLayoutWidget);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        label_6 = new QLabel(groupBox_6);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 20, 54, 12));
        line_3 = new QFrame(groupBox_6);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(10, 40, 391, 16));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        label_7 = new QLabel(groupBox_6);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 60, 54, 12));
        horizontalSlider_5 = new QSlider(groupBox_6);
        horizontalSlider_5->setObjectName(QStringLiteral("horizontalSlider_5"));
        horizontalSlider_5->setGeometry(QRect(89, 20, 251, 22));
        horizontalSlider_5->setOrientation(Qt::Horizontal);
        horizontalSlider_5->setTickPosition(QSlider::NoTicks);
        horizontalSlider_6 = new QSlider(groupBox_6);
        horizontalSlider_6->setObjectName(QStringLiteral("horizontalSlider_6"));
        horizontalSlider_6->setGeometry(QRect(89, 60, 251, 22));
        horizontalSlider_6->setOrientation(Qt::Horizontal);
        spinBox_5 = new QSpinBox(groupBox_6);
        spinBox_5->setObjectName(QStringLiteral("spinBox_5"));
        spinBox_5->setGeometry(QRect(350, 20, 42, 22));
        spinBox_6 = new QSpinBox(groupBox_6);
        spinBox_6->setObjectName(QStringLiteral("spinBox_6"));
        spinBox_6->setGeometry(QRect(350, 60, 42, 22));
		QObject::connect(horizontalSlider_5, SIGNAL(valueChanged(int)), spinBox_5, SLOT(setValue(int)));
		QObject::connect(spinBox_5,SIGNAL(valueChanged(int)),horizontalSlider_5,SLOT(setValue(int)));
		QObject::connect(horizontalSlider_6, SIGNAL(valueChanged(int)), spinBox_6, SLOT(setValue(int)));
		QObject::connect(spinBox_6,SIGNAL(valueChanged(int)),horizontalSlider_6,SLOT(setValue(int)));

        radioButton_3 = new QRadioButton(groupBox_6);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setGeometry(QRect(420, 40, 89, 16));

        verticalLayout->addWidget(groupBox_6);

        line_8 = new QFrame(verticalLayoutWidget);
        line_8->setObjectName(QStringLiteral("line_8"));
        line_8->setFrameShape(QFrame::HLine);
        line_8->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_8);

        groupBox_7 = new QGroupBox(verticalLayoutWidget);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        label_12 = new QLabel(groupBox_7);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(20, 20, 54, 12));
        line_6 = new QFrame(groupBox_7);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setGeometry(QRect(10, 40, 391, 16));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);
        label_13 = new QLabel(groupBox_7);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(20, 60, 54, 12));
        horizontalSlider_11 = new QSlider(groupBox_7);
        horizontalSlider_11->setObjectName(QStringLiteral("horizontalSlider_11"));
        horizontalSlider_11->setGeometry(QRect(89, 20, 251, 22));
        horizontalSlider_11->setOrientation(Qt::Horizontal);
        horizontalSlider_11->setTickPosition(QSlider::NoTicks);
        horizontalSlider_12 = new QSlider(groupBox_7);
        horizontalSlider_12->setObjectName(QStringLiteral("horizontalSlider_12"));
        horizontalSlider_12->setGeometry(QRect(89, 60, 251, 22));
        horizontalSlider_12->setOrientation(Qt::Horizontal);
        spinBox_11 = new QSpinBox(groupBox_7);
        spinBox_11->setObjectName(QStringLiteral("spinBox_11"));
        spinBox_11->setGeometry(QRect(350, 20, 42, 22));
        spinBox_12 = new QSpinBox(groupBox_7);
        spinBox_12->setObjectName(QStringLiteral("spinBox_12"));
        spinBox_12->setGeometry(QRect(350, 60, 42, 22));
		QObject::connect(horizontalSlider_11, SIGNAL(valueChanged(int)), spinBox_11, SLOT(setValue(int)));
		QObject::connect(spinBox_11, SIGNAL(valueChanged(int)), horizontalSlider_11, SLOT(setValue(int)));
		QObject::connect(horizontalSlider_12, SIGNAL(valueChanged(int)), spinBox_12, SLOT(setValue(int)));
		QObject::connect(spinBox_12, SIGNAL(valueChanged(int)), horizontalSlider_12, SLOT(setValue(int)));
        radioButton_6 = new QRadioButton(groupBox_7);
        radioButton_6->setObjectName(QStringLiteral("radioButton_6"));
        radioButton_6->setGeometry(QRect(420, 40, 89, 16));

        verticalLayout->addWidget(groupBox_7);

        line_9 = new QFrame(verticalLayoutWidget);
        line_9->setObjectName(QStringLiteral("line_9"));
        line_9->setFrameShape(QFrame::HLine);
        line_9->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_9);

        groupBox_5 = new QGroupBox(verticalLayoutWidget);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        label_10 = new QLabel(groupBox_5);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(20, 20, 54, 12));
        line_5 = new QFrame(groupBox_5);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setGeometry(QRect(10, 40, 391, 16));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        label_11 = new QLabel(groupBox_5);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(20, 60, 54, 12));
        horizontalSlider_9 = new QSlider(groupBox_5);
        horizontalSlider_9->setObjectName(QStringLiteral("horizontalSlider_9"));
        horizontalSlider_9->setGeometry(QRect(89, 20, 251, 22));
        horizontalSlider_9->setOrientation(Qt::Horizontal);
        horizontalSlider_9->setTickPosition(QSlider::NoTicks);
        horizontalSlider_10 = new QSlider(groupBox_5);
        horizontalSlider_10->setObjectName(QStringLiteral("horizontalSlider_10"));
        horizontalSlider_10->setGeometry(QRect(89, 60, 251, 22));
        horizontalSlider_10->setOrientation(Qt::Horizontal);
        spinBox_9 = new QSpinBox(groupBox_5);
        spinBox_9->setObjectName(QStringLiteral("spinBox_9"));
        spinBox_9->setGeometry(QRect(350, 20, 42, 22));
        spinBox_10 = new QSpinBox(groupBox_5);
        spinBox_10->setObjectName(QStringLiteral("spinBox_10"));
        spinBox_10->setGeometry(QRect(350, 60, 42, 22));
		QObject::connect(horizontalSlider_9, SIGNAL(valueChanged(int)), spinBox_9, SLOT(setValue(int)));
		QObject::connect(spinBox_9, SIGNAL(valueChanged(int)), horizontalSlider_9, SLOT(setValue(int)));
		QObject::connect(horizontalSlider_10, SIGNAL(valueChanged(int)), spinBox_10, SLOT(setValue(int)));
		QObject::connect(spinBox_10, SIGNAL(valueChanged(int)), horizontalSlider_10, SLOT(setValue(int)));
        radioButton_5 = new QRadioButton(groupBox_5);
        radioButton_5->setObjectName(QStringLiteral("radioButton_5"));
        radioButton_5->setGeometry(QRect(420, 40, 89, 16));

        verticalLayout->addWidget(groupBox_5);


        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Action Range Set", Q_NULLPTR));
		QPixmap pixmap = QPixmap("Grey1.jpg").scaled(Form->size());
		QPalette palette(Form->palette());
		palette.setBrush(QPalette::Background, QBrush(pixmap));
		Form->setPalette(palette);

        pushButton->setText(QApplication::translate("Form", "Monitor", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Form", "ServoSet", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Form", "Mode", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("Form", "ParaSet", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("Form", "More", Q_NULLPTR));
        label->setText(QApplication::translate("Form", "Action Range Adjust", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("Form", "Leg1 Range", Q_NULLPTR));
        label_2->setText(QApplication::translate("Form", "Min", Q_NULLPTR));
        label_3->setText(QApplication::translate("Form", "Max", Q_NULLPTR));
        radioButton->setText(QApplication::translate("Form", "Reverse", Q_NULLPTR));
        groupBox_6->setTitle(QApplication::translate("Form", "Leg2 Range", Q_NULLPTR));
        label_6->setText(QApplication::translate("Form", "Min", Q_NULLPTR));
        label_7->setText(QApplication::translate("Form", "Max", Q_NULLPTR));
        radioButton_3->setText(QApplication::translate("Form", "Reverse", Q_NULLPTR));
        groupBox_7->setTitle(QApplication::translate("Form", "Leg3 Range", Q_NULLPTR));
        label_12->setText(QApplication::translate("Form", "Min", Q_NULLPTR));
        label_13->setText(QApplication::translate("Form", "Max", Q_NULLPTR));
        radioButton_6->setText(QApplication::translate("Form", "Reverse", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("Form", "Leg4 Range", Q_NULLPTR));
        label_10->setText(QApplication::translate("Form", "Min", Q_NULLPTR));
        label_11->setText(QApplication::translate("Form", "Max", Q_NULLPTR));
        radioButton_5->setText(QApplication::translate("Form", "Reverse", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RANGESET_H
