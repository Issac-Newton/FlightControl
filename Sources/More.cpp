#include "More.h"

More::More(QWidget *parent)
	:QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.pushButton,SIGNAL(clicked()),this,SLOT(toDisp()));
	connect(ui.pushButton_2, SIGNAL(clicked()), this, SLOT(toServo()));
	connect(ui.pushButton_3,SIGNAL(clicked()),this,SLOT(toRange()));
	connect(ui.pushButton_4,SIGNAL(clicked()),this,SLOT(toPressure()));
	connect(ui.pushButton_5, SIGNAL(clicked()), this, SLOT(toPara()));

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

void More::moreSet()
{
	this->show();
}

void More::toDisp()
{
	this->hide();
	emit more_to_disp();
}

void More::toServo()
{
	this->hide();
	emit more_to_servo();
}

void More::toRange()
{
	this->hide();
	emit more_to_range();
}

void More::toPressure()
{
	this->hide();
	emit more_to_pressure();
}

void More::toPara()
{
	this->hide();
	emit more_to_para();
}