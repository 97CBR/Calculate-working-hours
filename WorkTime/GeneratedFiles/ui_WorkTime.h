/********************************************************************************
** Form generated from reading UI file 'WorkTime.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORKTIME_H
#define UI_WORKTIME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WorkTimeClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_10;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *settings;
    QSpacerItem *horizontalSpacer;
    QPushButton *top;
    QPushButton *small;
    QPushButton *closewindow;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *Tips;
    QHBoxLayout *horizontalLayout_5;
    QLCDNumber *lcdNumber;
    QLCDNumber *allTime;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *startWork;
    QPushButton *stopWork;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_7;
    QListWidget *listWidget;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_2;
    QDateEdit *dateEdit;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_3;
    QDateEdit *dateEdit_2;
    QVBoxLayout *verticalLayout_3;
    QProgressBar *progressBar;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *WorkTimeClass)
    {
        if (WorkTimeClass->objectName().isEmpty())
            WorkTimeClass->setObjectName(QStringLiteral("WorkTimeClass"));
        WorkTimeClass->resize(617, 430);
        centralWidget = new QWidget(WorkTimeClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_10 = new QVBoxLayout(centralWidget);
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setContentsMargins(11, 11, 11, 11);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        settings = new QPushButton(centralWidget);
        settings->setObjectName(QStringLiteral("settings"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/WorkTime/C:/Users/82436/Downloads/images/cogs-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        settings->setIcon(icon);

        horizontalLayout_3->addWidget(settings);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        top = new QPushButton(centralWidget);
        top->setObjectName(QStringLiteral("top"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/WorkTime/C:/Users/82436/Downloads/images/maximize.png"), QSize(), QIcon::Normal, QIcon::Off);
        top->setIcon(icon1);

        horizontalLayout_3->addWidget(top);

        small = new QPushButton(centralWidget);
        small->setObjectName(QStringLiteral("small"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/WorkTime/C:/Users/82436/Downloads/images/minimize_window.png"), QSize(), QIcon::Normal, QIcon::Off);
        small->setIcon(icon2);

        horizontalLayout_3->addWidget(small);

        closewindow = new QPushButton(centralWidget);
        closewindow->setObjectName(QStringLiteral("closewindow"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(closewindow->sizePolicy().hasHeightForWidth());
        closewindow->setSizePolicy(sizePolicy);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/WorkTime/C:/Users/82436/Downloads/images/close_window.png"), QSize(), QIcon::Normal, QIcon::Off);
        closewindow->setIcon(icon3);

        horizontalLayout_3->addWidget(closewindow);


        verticalLayout_9->addLayout(horizontalLayout_3);

        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        Tips = new QLabel(tab);
        Tips->setObjectName(QStringLiteral("Tips"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Tips->sizePolicy().hasHeightForWidth());
        Tips->setSizePolicy(sizePolicy1);
        Tips->setTextFormat(Qt::AutoText);
        Tips->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(Tips);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        lcdNumber = new QLCDNumber(tab);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lcdNumber->sizePolicy().hasHeightForWidth());
        lcdNumber->setSizePolicy(sizePolicy2);
        lcdNumber->setDigitCount(8);

        horizontalLayout_5->addWidget(lcdNumber);

        allTime = new QLCDNumber(tab);
        allTime->setObjectName(QStringLiteral("allTime"));
        sizePolicy2.setHeightForWidth(allTime->sizePolicy().hasHeightForWidth());
        allTime->setSizePolicy(sizePolicy2);
        allTime->setFrameShape(QFrame::Box);
        allTime->setFrameShadow(QFrame::Raised);
        allTime->setSmallDecimalPoint(false);
        allTime->setDigitCount(7);
        allTime->setMode(QLCDNumber::Dec);
        allTime->setSegmentStyle(QLCDNumber::Filled);

        horizontalLayout_5->addWidget(allTime);


        verticalLayout->addLayout(horizontalLayout_5);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        startWork = new QPushButton(tab);
        startWork->setObjectName(QStringLiteral("startWork"));
        startWork->setStyleSheet(QStringLiteral("color: rgb(85, 255, 127);"));

        horizontalLayout->addWidget(startWork);

        stopWork = new QPushButton(tab);
        stopWork->setObjectName(QStringLiteral("stopWork"));
        stopWork->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));

        horizontalLayout->addWidget(stopWork);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout_8 = new QVBoxLayout(tab_2);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        listWidget = new QListWidget(tab_2);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        verticalLayout_7->addWidget(listWidget);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        verticalLayout_4->addWidget(label_2);

        dateEdit = new QDateEdit(tab_2);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));

        verticalLayout_4->addWidget(dateEdit);


        horizontalLayout_2->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_3 = new QLabel(tab_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_5->addWidget(label_3);

        dateEdit_2 = new QDateEdit(tab_2);
        dateEdit_2->setObjectName(QStringLiteral("dateEdit_2"));

        verticalLayout_5->addWidget(dateEdit_2);


        horizontalLayout_2->addLayout(verticalLayout_5);


        verticalLayout_6->addLayout(horizontalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        progressBar = new QProgressBar(tab_2);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(36);

        verticalLayout_3->addWidget(progressBar);


        verticalLayout_6->addLayout(verticalLayout_3);


        verticalLayout_7->addLayout(verticalLayout_6);


        verticalLayout_8->addLayout(verticalLayout_7);

        tabWidget->addTab(tab_2, QString());

        verticalLayout_9->addWidget(tabWidget);


        verticalLayout_10->addLayout(verticalLayout_9);

        WorkTimeClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(WorkTimeClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 617, 23));
        WorkTimeClass->setMenuBar(menuBar);
        statusBar = new QStatusBar(WorkTimeClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        WorkTimeClass->setStatusBar(statusBar);

        retranslateUi(WorkTimeClass);
        QObject::connect(startWork, SIGNAL(clicked()), WorkTimeClass, SLOT(StartWork()));
        QObject::connect(stopWork, SIGNAL(clicked()), WorkTimeClass, SLOT(StopWork()));
        QObject::connect(top, SIGNAL(clicked()), WorkTimeClass, SLOT(TopWindow()));
        QObject::connect(small, SIGNAL(clicked()), WorkTimeClass, SLOT(SmallWindow()));
        QObject::connect(closewindow, SIGNAL(clicked()), WorkTimeClass, SLOT(CloseWindow()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(WorkTimeClass);
    } // setupUi

    void retranslateUi(QMainWindow *WorkTimeClass)
    {
        WorkTimeClass->setWindowTitle(QApplication::translate("WorkTimeClass", "WorkTime", nullptr));
        settings->setText(QString());
        top->setText(QString());
        small->setText(QString());
        closewindow->setText(QString());
        Tips->setText(QApplication::translate("WorkTimeClass", "Come on ! Time is passing !", nullptr));
        startWork->setText(QApplication::translate("WorkTimeClass", "\345\274\200\345\247\213\345\267\245\344\275\234", nullptr));
        stopWork->setText(QApplication::translate("WorkTimeClass", "\345\201\234\346\255\242\345\267\245\344\275\234", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("WorkTimeClass", "Time", nullptr));
        label_2->setText(QApplication::translate("WorkTimeClass", "\345\274\200\345\247\213\346\227\245\346\234\237", nullptr));
        label_3->setText(QApplication::translate("WorkTimeClass", "\346\210\252\346\255\242\346\227\245\346\234\237", nullptr));
        progressBar->setFormat(QApplication::translate("WorkTimeClass", "%p%", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("WorkTimeClass", "When", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WorkTimeClass: public Ui_WorkTimeClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORKTIME_H
