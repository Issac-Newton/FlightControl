#include "FlightControl.h"

FlightControl::FlightControl(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.pushButton,SIGNAL(clicked()),this,SLOT(toServo()));
	connect(ui.pushButton_2, SIGNAL(clicked()), this, SLOT(toRange()));
	connect(ui.pushButton_3,SIGNAL(clicked()),this,SLOT(toPressure()));
	connect(ui.pushButton_4,SIGNAL(clicked()),this,SLOT(toPara()));
	connect(ui.pushButton_5,SIGNAL(clicked()),this,SLOT(toMore()));
}

void FlightControl::toServo()
{
	this->hide();
	emit disp_to_servo();
}


void FlightControl::toPressure()
{
	this->hide();
	emit disp_to_pressure();
}

void FlightControl::toRange()
{
	this->hide();
	emit disp_to_range();
}

void FlightControl::toPara()
{
	this->hide();
	emit disp_to_para();
}

void FlightControl::toMore()
{
	this->hide();
	emit disp_to_more();
}

void FlightControl::Monitor()
{
	this->show();
}
