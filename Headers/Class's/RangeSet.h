#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_RangeSet.h"

class RangeSet : public QMainWindow
{
	Q_OBJECT

public:
	RangeSet(QWidget *parent = Q_NULLPTR);

private slots:
	void rangeSet();
	void toMonitor();
	void toServo();
	void toPressure();
	void toPara();
	void toMore();
signals:
	void range_to_disp();
	void range_to_servo();
	void range_to_pressure();
	void range_to_para();
	void range_to_more();
private:
	Ui::Form ui;
};