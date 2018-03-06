#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_PressureSet.h"

class PressureSet : public QMainWindow
{
	Q_OBJECT

public:
	PressureSet(QWidget *parent = Q_NULLPTR);

private slots:
	void pressureSet();
	void toMonitor();
	void toRange();
	void toServo();
	void toPara();
	void toMore();
signals:
	void pressure_to_disp();
	void pressure_to_servo();
	void pressure_to_range();
	void pressure_to_para();
	void pressure_to_more();
private:
	Ui::MainWindowPre ui;
};