#include "PressureSet.h"

PressureSet::PressureSet(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.pushButton,SIGNAL(clicked()),this,SLOT(toMonitor()));
	connect(ui.pushButton_2, SIGNAL(clicked()), this, SLOT(toServo()));
	connect(ui.pushButton_3,SIGNAL(clicked()),this,SLOT(toRange()));
	connect(ui.pushButton_4, SIGNAL(clicked()), this, SLOT(toPara()));
	connect(ui.pushButton_5, SIGNAL(clicked()), this, SLOT(toMore()));
}

void PressureSet::toMonitor()
{
	this->hide();
	emit pressure_to_disp();
}

void PressureSet::toServo()
{
	this->hide();
	emit pressure_to_servo();
}

void PressureSet::toRange()
{
	this->hide();
	emit pressure_to_range();
}

void PressureSet::toPara()
{
	this->hide();
	emit pressure_to_para();
}

void PressureSet::pressureSet()
{
	this->show();
}

void PressureSet::toMore()
{
	this->hide();
	emit pressure_to_more();
}