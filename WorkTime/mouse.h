#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_WorkTime.h"
#include <QLCDNumber>
#include <QTime>
#include <QTimer>
#include <QMouseEvent>
#include <QWidget>

class BaseWidget : public QWidget
{
	
	Q_OBJECT

public:
	explicit BaseWidget(QWidget *parent = 0);

	//������갴�¿��ƶ����ڵ��������Ӵ����б������ø�����
	void setAreaMovable(const QRect rt);

private:
	QRect m_areaMovable;//���ƶ����ڵ��������ֻ���ڸ������²����ƶ�����
	bool m_bPressed;//��갴�±�־���������Ҽ���
	QPoint m_ptPress;//��갴�µĳ�ʼλ��

protected:
	void mousePressEvent(QMouseEvent *);
	void mouseMoveEvent(QMouseEvent *);
	void mouseReleaseEvent(QMouseEvent *);

public slots:
	void StartWork();
	void StopWork();
	void showTime();

};