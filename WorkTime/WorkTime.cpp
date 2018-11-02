#include "WorkTime.h"
#include <ctime>
#include <string>
#include <QTime>
#include <QTimer>
#include "mouse.h"
#include <qsettings.h>
#include <qdatetime.h>
#include <qdebug.h>
#include  <QPropertyAnimation>
//#include "ui_QtGuiClass.h"

using namespace std;


WorkTime::WorkTime(QWidget *parent)
	: QMainWindow(parent)
	//ui(new Ui::WorkTimeClass)
{
	QSettings settings("config.ini", QSettings::IniFormat);
	settings.setIniCodec("UTF8");
	int mode = settings.value("Time/alltime").toInt();

	WorkTime::number = mode;

	//ui = new Ui::WorkTimeClass;
	//ui.lcdNumber->display("01:21");
	ui.setupUi(this);

	

	//ui.centralWidget->setStyleSheet("background-color:black;");


	//ui.tabWidget->setStyleSheet("QTabWidget:pane {border-top:0px solid #e8f3f9;background:  transparent; }");
	ui.tab->setStyleSheet("QTabWidget:pane {border-top:0px solid #e8f3f9;background:  transparent; }");
	ui.tab_2->setStyleSheet("QTabWidget:pane {border-top:0px solid #e8f3f9;background:  transparent; }");
	//ui.tabWidget->setAutoFillBackground();
	//view=new Ui_Form;

	ui.lcdNumber->display("00:00");

	timer = new QTimer(this->ui.lcdNumber);
	connect(timer, SIGNAL(timeout()), this, SLOT(showTime()));  //用一个定时信号来更改时间
	timer->start(500);

	alltime = new QTimer(this->ui.allTime);

	connect(ui.top, SIGNAL(clicked()), this, SLOT(TopWindow()));
	connect(ui.small, SIGNAL(clicked()), this, SLOT(SmallWindow()));
	connect(ui.closewindow, SIGNAL(clicked()), this, SLOT(CloseWindow()));
	connect(ui.settings, SIGNAL(clicked()), this, SLOT(settingPage()));

	connect(alltime, SIGNAL(timeout()), this, SLOT(addTime()));  //用一个定时信号来更改时间

	connect(ui.progressBar, SIGNAL(dateChanged(Qdate)), this, SLOT(chageProgress()));


	//初始化时间线和日期配置
	initTime();

	//connect(ui.startWork, SIGNAL(clicked()), this, SLOT(StartWork()));
	//connect(ui.stopWork, SIGNAL(clicked()), this, SLOT(StopWork()));

	ui.dateEdit->setDisplayFormat("yyyy-MM-dd");
	ui.dateEdit_2->setDisplayFormat("yyyy-MM-dd");

	ui.dateEdit->setCalendarPopup(true);
	ui.dateEdit_2->setCalendarPopup(true);

}




void WorkTime::StartWork()
{
	MarkTime('s');
	alltime->start(500);
	//alltime = new QTimer(this->ui.allTime);
	//ui.allTime->display(mode);
	ui.stopWork->setEnabled(true);
	ui.startWork->setEnabled(false);
	//ui.allTime->display("00:01");
	//what you want to do
	//time_t rawtime;
	//struct tm *ptminfo;
	//string now;
	//time(&rawtime);
	//ptminfo = localtime(&rawtime);
	//now = to_string(ptminfo->tm_hour) +":"+ to_string(ptminfo->tm_min)+":" + to_string(ptminfo->tm_sec);
	//ui.lcdNumber->display(QString::fromStdString(now));
	ui.startWork->setText(tr("Start Now"));
	ui.stopWork->setText(tr("Stop Now"));


}

void WorkTime::StopWork()
{
	MarkTime('e');
	alltime->stop();
	WriteTime();
	//what you want to do
	ui.startWork->setEnabled(true);
	ui.stopWork->setEnabled(false);
	ui.startWork->setText(tr("Start Now"));
	ui.stopWork->setText("End Now");

}




void WorkTime::showTime()
{
	tim = QTime::currentTime();  //获取当地时间
	QString timestr = tim.toString("hh:mm:ss"); //设置时间格式
	//time->display(timestr);  //显示时间
	ui.lcdNumber->display(timestr);
}


void WorkTime::addTime()
{
	//static double number;
	//num = n;
	number = number + 0.5;
	//QString times= QString("%1").arg(num);

	QString times = QString::number((int)number);
	//tim = QTime::currentTime();  //获取当地时间

	//QString timestr = tim.toString("hh:mm:ss"); //设置时间格式
	//											//time->display(timestr);  //显示时间

	ui.allTime->display(times);

	//tim = QTime::currentTime();  //获取当地时间

	//QString timestr = tim.toString("hh:mm:ss"); //设置时间格式
	//											//time->display(timestr);  //显示时间
	//ui.lcdNumber->display(timestr);
}

void WorkTime::TopWindow()
{
	

	this->showMinimized();
}

void WorkTime::SmallWindow()
{
	this->showMinimized();
}

void WorkTime::CloseWindow()
{
	WriteTime();
	this->close();

}


void WorkTime::settingPage()
{
	//QPropertyAnimation *animation = new QPropertyAnimation(, "windowOpacity");
	//animation->setDuration(1000);
	//animation->setStartValue(0);
	//animation->setEndValue(1);
	//animation->start();
	//view->show();
	//mywidget = new Ui::Form;

	//ui.centralWidget->destroyed();

	////mywidget->setLayout(gridLayout);
	//mywidget->setupUi(this);

	//mywidget->label
	           
	qDebug() << "Jump to setting page";
}



void WorkTime::mouseReleaseEvent(QMouseEvent *event)
{
	mMoveing = false;
}

//重写鼠标按下事件  
void WorkTime::mousePressEvent(QMouseEvent *event)
{
	mMoveing = true;
	//记录下鼠标相对于窗口的位置  
	//event->globalPos()鼠标按下时，鼠标相对于整个屏幕位置  
	//pos() this->pos()鼠标按下时，窗口相对于整个屏幕位置  
	mMovePosition = event->globalPos() - pos();
	//return QDialog::mousePressEvent(event);
}

//重写鼠标移动事件  
void WorkTime::mouseMoveEvent(QMouseEvent *event)
{
	//(event->buttons() && Qt::LeftButton)按下是左键  
	//鼠标移动事件需要移动窗口，窗口移动到哪里呢？就是要获取鼠标移动中，窗口在整个屏幕的坐标，然后move到这个坐标，怎么获取坐标？  
	//通过事件event->globalPos()知道鼠标坐标，鼠标坐标减去鼠标相对于窗口位置，就是窗口在整个屏幕的坐标  
	if (mMoveing && (event->buttons() && Qt::LeftButton)
		&& (event->globalPos() - mMovePosition).manhattanLength() > QApplication::startDragDistance())
	{
		move(event->globalPos() - mMovePosition);
		mMovePosition = event->globalPos() - pos();
	}
	//return QDialog::mouseMoveEvent(event);
}

void WorkTime::WriteTime()
{
	QSettings setting("config.ini", QSettings::IniFormat);//生成配置文件
	setting.setIniCodec("UTF8");
	setting.beginGroup("Time");//beginGroup与下面endGroup 相对应，“config”是标记
	setting.setValue("alltime", QVariant((int)number));

	setting.endGroup();
	setting.beginGroup("Other");//beginGroup与下面endGroup 相对应，“config”是标记
	setting.setValue("startdate", QVariant(ui.dateEdit->text()));
	setting.setValue("enddate", QVariant(ui.dateEdit_2->text()));
	setting.endGroup();

}


void WorkTime::MarkTime(char signal)
{
	QSettings setting("config.ini", QSettings::IniFormat);//生成配置文件
	setting.setIniCodec("UTF8");
	setting.beginGroup("Log");//beginGroup与下面endGroup 相对应，“config”是标记
	
	QString market = "";
	if (signal == 's')
	{
		QString now = QString::number(ui.listWidget->count() + 1) + " | " + QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss ddd") + " | " + "Start Work";
		ui.listWidget->addItem(now);
		setting.setValue(QString::number(ui.listWidget->count()), now);

		//market = ;
	}
	else if(signal == 'e') {
		QString now = QString::number(ui.listWidget->count() + 1) + " | " + QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss ddd") + " | " + "Stop Work";
		ui.listWidget->addItem(now);
		setting.setValue(QString::number(ui.listWidget->count()), now);
		//market == "Stop Work";
	}
	setting.endGroup();
	setting.beginGroup("Other");
	setting.setValue("listnum", ui.listWidget->count());
	setting.endGroup();
}

void WorkTime::initTime()
{
	QSettings settings("config.ini", QSettings::IniFormat);
	settings.setIniCodec("UTF8");
	int num = settings.value("Other/listnum").toInt();

	for (int i=1; i <= num; i++)
	{
		QString log = "Log/" + QString::number(i);
		ui.listWidget->addItem(settings.value(log).toString());
	}


	QString startdate = settings.value("/Other/startdate").toString();
	QString enddate = settings.value("/Other/enddate").toString();
	//QString second = "2018-07-02";
	QDate dates;
	dates = QDate::fromString(startdate, "yyyy-MM-dd");
	ui.dateEdit->setDate(dates);
	dates = QDate::fromString(enddate, "yyyy-MM-dd");
	ui.dateEdit_2->setDate(dates);


	QDateTime sd = QDateTime::fromString(startdate, "yyyy-MM-dd");

	QDateTime ed = QDateTime::fromString(enddate, "yyyy-MM-dd");
	//time2.msecsTo(time)
	qDebug() << "ed - sd = " << sd.msecsTo(ed) / 60000/60/24 << "DAY";

	QDateTime nd = QDateTime::currentDateTime();

	qDebug() << "nd - sd = " << sd.msecsTo(nd) / 60000 / 60 / 24 << "DAY";

	//ps=passday ad=allday nd=nowday sd=startday= ed=enddate

	long long ad = sd.msecsTo(ed) / 60000 / 60 / 24;

	long long pd = (sd.msecsTo(nd) / 60000 / 60 / 24)*100;

	int  ps = pd / ad;

	qDebug() << "pd/sd = " << ps  << "%";

	ui.progressBar->setValue(ps);

}

//void WorkTime::chageProgress()
//{
// TODO : 后期修改，实现日期更改 自动更新进度条
//	qDebug() << "pd/sd = " << "dsaf" << "%";
//}