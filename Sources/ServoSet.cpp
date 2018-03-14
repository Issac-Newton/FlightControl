#include "ServoSet.h"

ServoSet::ServoSet(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.pushButton,SIGNAL(clicked()),this,SLOT(toDisp()));
	connect(ui.pushButton_2,SIGNAL(clicked()),this,SLOT(toRange()));
	connect(ui.pushButton_3, SIGNAL(clicked()), this, SLOT(toPressure()));
	connect(ui.pushButton_4,SIGNAL(clicked()),this,SLOT(toPara()));
	connect(ui.pushButton_5,SIGNAL(clicked()),this,SLOT(toMore()));

	connect(ui.horizontalSlider, SIGNAL(valueChanged(int)), ui.spinBox, SLOT(setValue(int)));
	connect(ui.spinBox, SIGNAL(valueChanged(int)), ui.horizontalSlider, SLOT(setValue(int)));
	
	connect(ui.dial,SIGNAL(valueChanged(int)),ui.spinBox_2,SLOT(setValue(int)));
	connect(ui.spinBox_2,SIGNAL(valueChanged(int)),ui.dial,SLOT(setValue(int)));

	setWindowFlags(windowFlags()& ~Qt::WindowMaximizeButtonHint);
	setFixedSize(this->width(), this->height());
	setWindowIcon(QIcon("fly.png"));

	QString button_style = "QPushButton{font-family:Comic Sans MS;font-size:12pt;background-image:url(button1.jpg); color:white; border-radius:10px;border-style: outset;}"
		"QPushButton:pressed{background-image:url(pressed1.jpg);border-style:inset;}";
	ui.pushButton->setStyleSheet(button_style);
	ui.pushButton_2->setStyleSheet(button_style);
	ui.pushButton_3->setStyleSheet(button_style);
	ui.pushButton_4->setStyleSheet(button_style);
	ui.pushButton_5->setStyleSheet(button_style);

	QPixmap pixmap = QPixmap("Grey1.jpg").scaled(this->size());
	QPalette palette(this->palette());
	palette.setBrush(QPalette::Background, QBrush(pixmap));
	this->setPalette(palette);
}

void ServoSet::toDisp()
{
	this->hide();
	emit servo_to_disp();
}

void ServoSet::toRange()
{
	this->hide();
	emit servo_to_range();
}

void ServoSet::toPressure()
{
	this->hide();
	emit servo_to_pressure();
}

void ServoSet::toPara()
{
	this->hide();
	emit servo_to_para();
}

void ServoSet::toMore()
{
	this->hide();
	emit servo_to_more();
}

void ServoSet::servoSet()
{
	this->show();
}