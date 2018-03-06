#include "RangeSet.h"

RangeSet::RangeSet(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.pushButton,SIGNAL(clicked()),this,SLOT(toMonitor()));
	connect(ui.pushButton_2,SIGNAL(clicked()),this,SLOT(toServo()));
	connect(ui.pushButton_3, SIGNAL(clicked()), this, SLOT(toPressure()));
	connect(ui.pushButton_4,SIGNAL(clicked()),this,SLOT(toPara()));
	connect(ui.pushButton_5,SIGNAL(clicked()),this,SLOT(toMore()));
}

void RangeSet::toMonitor()
{
	this->hide();
	emit range_to_disp();
}

void RangeSet::toServo()
{
	this->hide();
	emit range_to_servo();
}

void RangeSet::toPressure()
{
	this->hide();
	emit range_to_pressure();
}

void RangeSet::toPara()
{
	this->hide();
	emit range_to_para();
}

void RangeSet::toMore()
{
	this->hide();
	emit range_to_more();
}

void RangeSet::rangeSet()
{
	this->show();
}