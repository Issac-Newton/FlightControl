#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_More.h"

class More : public QMainWindow
{
	Q_OBJECT
public:
	More(QWidget *parent = Q_NULLPTR);

private slots:
	void moreSet();
	void toDisp();
	void toServo();
	void toRange();
	void toPressure();
	void toPara();
	
signals:
	void more_to_disp();
	void more_to_servo();
	void more_to_range();
	void more_to_pressure();
	void more_to_para();

private:
	Ui::MainWindowMore ui;
};