#include "PressureSet.h"

PressureSet::PressureSet(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.pushButton,SIGNAL(clicked()),this,SLOT(toMonitor()));
	connect(ui.pushButton_2, SIGNAL(clicked()), this, SLOT(toServo()));
	connect(ui.pushButton_3,SIGNAL(clicked()),this,SLOT(toRange()));
	connect(ui.pushButton_4, SIGNAL(clicked()), this, SLOT(toPara()));
	connect(ui.pushButton_5, SIGNAL(clicked()), this, SLOT(toMore()));

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

void PressureSet::toMonitor()
{
	this->hide();
	emit pressure_to_disp();
}

void PressureSet::toServo()
{
	this->hide();
	emit pressure_to_servo();
}

void PressureSet::toRange()
{
	this->hide();
	emit pressure_to_range();
}

void PressureSet::toPara()
{
	this->hide();
	emit pressure_to_para();
}

void PressureSet::pressureSet()
{
	this->show();
}

void PressureSet::toMore()
{
	this->hide();
	emit pressure_to_more();
}