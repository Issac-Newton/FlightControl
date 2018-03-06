#include "FlightControl.h"
#include <QtWidgets/QApplication>
#include "ServoSet.h"
#include "RangeSet.h"
#include "PressureSet.h"
#include "ParaSet.h"
#include "More.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	FlightControl w;
	ServoSet servoset;
	RangeSet rangeset;
	PressureSet pressureset;
	ParaSet paraset;
	More more;

	QObject::connect(&w,SIGNAL(disp_to_servo()),&servoset,SLOT(servoSet()));
	QObject::connect(&w,SIGNAL(disp_to_range()),&rangeset,SLOT(rangeSet()));
	QObject::connect(&w,SIGNAL(disp_to_pressure()),&pressureset,SLOT(pressureSet()));
	QObject::connect(&w, SIGNAL(disp_to_para()), &paraset, SLOT(paraSet()));
	QObject::connect(&w,SIGNAL(disp_to_more()),&more,SLOT(moreSet()));

	QObject::connect(&servoset,SIGNAL(servo_to_disp()),&w,SLOT(Monitor()));
	QObject::connect(&servoset,SIGNAL(servo_to_range()),&rangeset,SLOT(rangeSet()));
	QObject::connect(&servoset,SIGNAL(servo_to_pressure()),&pressureset,SLOT(pressureSet()));
	QObject::connect(&servoset, SIGNAL(servo_to_para()), &paraset, SLOT(paraSet()));
	QObject::connect(&servoset,SIGNAL(servo_to_more()),&more,SLOT(moreSet()));

	QObject::connect(&rangeset,SIGNAL(range_to_disp()),&w,SLOT(Monitor()));
	QObject::connect(&rangeset,SIGNAL(range_to_servo()),&servoset,SLOT(servoSet()));
	QObject::connect(&rangeset, SIGNAL(range_to_pressure()), &pressureset, SLOT(pressureSet()));
	QObject::connect(&rangeset,SIGNAL(range_to_para()),&paraset,SLOT(paraSet()));
	QObject::connect(&rangeset,SIGNAL(range_to_more()),&more,SLOT(moreSet()));

	QObject::connect(&pressureset,SIGNAL(pressure_to_disp()),&w,SLOT(Monitor()));
	QObject::connect(&pressureset,SIGNAL(pressure_to_servo()),&servoset,SLOT(servoSet()));
	QObject::connect(&pressureset,SIGNAL(pressure_to_range()),&rangeset,SLOT(rangeSet()));
	QObject::connect(&pressureset,SIGNAL(pressure_to_para()),&paraset,SLOT(paraSet()));
	QObject::connect(&pressureset,SIGNAL(pressure_to_more()),&more,SLOT(moreSet()));

	QObject::connect(&paraset, SIGNAL(para_to_disp()), &w, SLOT(Monitor()));
	QObject::connect(&paraset, SIGNAL(para_to_servo()),&servoset,SLOT(servoSet()));
	QObject::connect(&paraset, SIGNAL(para_to_range()), &rangeset, SLOT(rangeSet()));
	QObject::connect(&paraset, SIGNAL(para_to_pressure()),&pressureset,SLOT(pressureSet()));
	QObject::connect(&paraset,SIGNAL(para_to_more()),&more,SLOT(moreSet()));

	QObject::connect(&more, SIGNAL(more_to_disp()), &w, SLOT(Monitor()));
	QObject::connect(&more, SIGNAL(more_to_servo()), &servoset, SLOT(servoSet()));
	QObject::connect(&more, SIGNAL(more_to_range()), &rangeset, SLOT(rangeSet()));
	QObject::connect(&more,SIGNAL(more_to_pressure()),&pressureset,SLOT(pressureSet()));
	QObject::connect(&more,SIGNAL(more_to_para()),&paraset,SLOT(paraSet()));

	w.show();
	return a.exec();
}
