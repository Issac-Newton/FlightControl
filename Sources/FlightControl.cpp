#include "FlightControl.h"
#include <QMovie>

FlightControl::FlightControl(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.pushButton,SIGNAL(clicked()),this,SLOT(toServo()));
	connect(ui.pushButton_2, SIGNAL(clicked()), this, SLOT(toRange()));
	connect(ui.pushButton_3,SIGNAL(clicked()),this,SLOT(toPressure()));
	connect(ui.pushButton_4,SIGNAL(clicked()),this,SLOT(toPara()));
	connect(ui.pushButton_5,SIGNAL(clicked()),this,SLOT(toMore()));

	setWindowFlags(windowFlags()& ~Qt::WindowMaximizeButtonHint);
	setFixedSize(this->width(), this->height());


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

	QLabel *gif_label = new QLabel();
	ui.verticalLayout->addWidget(gif_label,Qt::AlignCenter);
	QMovie *movie = new QMovie("data.gif");
	gif_label->setMovie(movie);
	gif_label->setFixedSize(700,250);
	movie->start();
}

void FlightControl::toServo()
{
	this->hide();
	emit disp_to_servo();
}


void FlightControl::toPressure()
{
	this->hide();
	emit disp_to_pressure();
}

void FlightControl::toRange()
{
	this->hide();
	emit disp_to_range();
}

void FlightControl::toPara()
{
	this->hide();
	emit disp_to_para();
}

void FlightControl::toMore()
{
	this->hide();
	emit disp_to_more();
}

void FlightControl::Monitor()
{
	this->show();
}
