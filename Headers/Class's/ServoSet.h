#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_ServoSet.h"

class ServoSet : public QMainWindow
{
	Q_OBJECT

public:
	ServoSet(QWidget *parent = Q_NULLPTR);
private slots:
	void servoSet();	
	void toDisp();
	void toRange();
	void toPressure();
	void toPara();
	void toMore();
signals:
	void servo_to_disp();
	void servo_to_range();
	void servo_to_pressure();
	void servo_to_para();
	void servo_to_more();
private:
	Ui::MainWindow ui;
};