#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_WorkTime.h"
#include <QLCDNumber>
#include <QTime>
#include <QTimer>
#include "ui_widget.h"

class WorkTime : public QMainWindow
{
	Q_OBJECT

public:
	WorkTime(QWidget *parent = Q_NULLPTR);
	double number;

private:
	
	Ui::WorkTimeClass ui;
	Ui::Form *mywidget;
	QLCDNumber *time;
	QTime tim;
	QTimer *timer;
	QTimer *alltime;

	bool        mMoveing;
	QPoint      mMovePosition;
	

protected:

	virtual void mousePressEvent(QMouseEvent *event);
	virtual void mouseMoveEvent(QMouseEvent *event);
	void WriteTime();
	void MarkTime(char signal);
	void initTime();

	virtual void mouseReleaseEvent(QMouseEvent *event);

public slots:
	void StartWork();
	void StopWork();
	void showTime();
	void addTime();
	void TopWindow();
	void SmallWindow();
	void CloseWindow();
	void settingPage();
	//void chageProgress();
};