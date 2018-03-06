#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_ParaSet.h"

class ParaSet : public QMainWindow
{
	Q_OBJECT

public:
	ParaSet(QWidget *parent = Q_NULLPTR);

private slots:
	void paraSet();	
	void toMonitor();
	void toRange();
	void toPressure();
	void toServo();
	void toMore();
signals:
	void para_to_disp();
	void para_to_servo();
	void para_to_range();
	void para_to_pressure();
	void para_to_more();

private:
	Ui::MainWindowPara ui;
};