#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_FlightControl.h"

class FlightControl : public QMainWindow
{
	Q_OBJECT

public:
	FlightControl(QWidget *parent = Q_NULLPTR);

private slots:
	void toServo();
	void Monitor();
	void toRange();
	void toPressure();
	void toPara();
	void toMore();
signals:
	void disp_to_servo();
	void disp_to_range();
	void disp_to_pressure();
	void disp_to_para();
	void disp_to_more();
private:
	Ui::FlightControlClass ui;
};
