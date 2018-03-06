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