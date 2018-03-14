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
	connect(ui.horizontalSlider, SIGNAL(valueChanged(int)), ui.spinBox, SLOT(setValue(int)));
	connect(ui.spinBox, SIGNAL(valueChanged(int)), ui.horizontalSlider, SLOT(setValue(int)));
	connect(ui.horizontalSlider_2, SIGNAL(valueChanged(int)), ui.spinBox_2, SLOT(setValue(int)));
	connect(ui.spinBox_2, SIGNAL(valueChanged(int)), ui.horizontalSlider_2, SLOT(setValue(int)));
	connect(ui.horizontalSlider_5, SIGNAL(valueChanged(int)), ui.spinBox_5, SLOT(setValue(int)));
	connect(ui.spinBox_5, SIGNAL(valueChanged(int)), ui.horizontalSlider_5, SLOT(setValue(int)));
	connect(ui.horizontalSlider_6, SIGNAL(valueChanged(int)), ui.spinBox_6, SLOT(setValue(int)));
	connect(ui.spinBox_6, SIGNAL(valueChanged(int)), ui.horizontalSlider_6, SLOT(setValue(int)));
	connect(ui.horizontalSlider_11, SIGNAL(valueChanged(int)), ui.spinBox_11, SLOT(setValue(int)));
	connect(ui.spinBox_11, SIGNAL(valueChanged(int)), ui.horizontalSlider_11, SLOT(setValue(int)));
	connect(ui.horizontalSlider_12, SIGNAL(valueChanged(int)), ui.spinBox_12, SLOT(setValue(int)));
	connect(ui.spinBox_12, SIGNAL(valueChanged(int)), ui.horizontalSlider_12, SLOT(setValue(int)));

	connect(ui.horizontalSlider_9, SIGNAL(valueChanged(int)), ui.spinBox_9, SLOT(setValue(int)));
	connect(ui.spinBox_9, SIGNAL(valueChanged(int)), ui.horizontalSlider_9, SLOT(setValue(int)));
	connect(ui.horizontalSlider_10, SIGNAL(valueChanged(int)), ui.spinBox_10, SLOT(setValue(int)));
	connect(ui.spinBox_10, SIGNAL(valueChanged(int)), ui.horizontalSlider_10, SLOT(setValue(int)));

	setWindowFlags(windowFlags()& ~Qt::WindowMaximizeButtonHint);
	setFixedSize(this->width(), this->height());
	setWindowIcon(QIcon("fly.png"));

	QString button_style = "QPushButton{font-family:Comic Sans MS;font-size:12pt;background-image:url(button1.jpg); color:white; border-radius:10px;border-style: outset;}"
		"QPushButton:pressed{background-image:url(pressed1.jpg);border-style:inset;}";
	ui.pushButton->setStyleSheet(button_style);
	ui.pushButton_2->setStyleSheet(button_style);
	ui.pushButton_3->setStyleSheet(button_style);
	ui.pushButton_4->setStyleSheet(button_style);
	ui.pushButton_5->setStyleSheet(button_style);

	QPixmap pixmap = QPixmap("Grey1.jpg").scaled(this->size());
	QPalette palette(this->palette());
	palette.setBrush(QPalette::Background, QBrush(pixmap));
	this->setPalette(palette);
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