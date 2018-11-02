#include "WorkTime.h"
#include <QtWidgets/QApplication>


int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	WorkTime w;
	w.setWindowOpacity(0.8);
	w.setWindowFlags(Qt::FramelessWindowHint);
	//无边框设置
	//w.setAttribute(Qt::WA_TranslucentBackground);

	w.setWindowIcon(QIcon(":/WorkTime/C:/Users/82436/Downloads/time.ico"));

	//背景透明设置

	w.show();

	return a.exec();
}
