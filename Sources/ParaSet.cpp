#include "ParaSet.h"

ParaSet::ParaSet(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.pushButton,SIGNAL(clicked()),this,SLOT(toMonitor()));
	connect(ui.pushButton_2,SIGNAL(clicked()),this,SLOT(toServo()));
	connect(ui.pushButton_3, SIGNAL(clicked()), this, SLOT(toRange()));
	connect(ui.pushButton_4, SIGNAL(clicked()), this, SLOT(toPressure()));
	connect(ui.pushButton_5, SIGNAL(clicked()), this, SLOT(toMore()));
}

void ParaSet::paraSet()
{
	this->show();
}

void ParaSet::toMonitor()
{
	this->hide();
	emit para_to_disp();
}

void ParaSet::toServo()
{
	this->hide();
	emit para_to_servo();
}

void ParaSet::toRange()
{
	this->hide();
	emit para_to_range();
}

void ParaSet::toPressure()
{
	this->hide();
	emit para_to_pressure();
}

void ParaSet::toMore()
{
	this->hide();
	emit para_to_more();
}