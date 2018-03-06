#include "More.h"

More::More(QWidget *parent)
	:QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.pushButton,SIGNAL(clicked()),this,SLOT(toDisp()));
	connect(ui.pushButton_2, SIGNAL(clicked()), this, SLOT(toServo()));
	connect(ui.pushButton_3,SIGNAL(clicked()),this,SLOT(toRange()));
	connect(ui.pushButton_4,SIGNAL(clicked()),this,SLOT(toPressure()));
	connect(ui.pushButton_5, SIGNAL(clicked()), this, SLOT(toPara()));
}

void More::moreSet()
{
	this->show();
}

void More::toDisp()
{
	this->hide();
	emit more_to_disp();
}

void More::toServo()
{
	this->hide();
	emit more_to_servo();
}

void More::toRange()
{
	this->hide();
	emit more_to_range();
}

void More::toPressure()
{
	this->hide();
	emit more_to_pressure();
}

void More::toPara()
{
	this->hide();
	emit more_to_para();
}