/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEditSrcFile;
    QPushButton *pushButtonBowseSrc;
    QPushButton *pushButtonBrowseLoad;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEditDstFile;
    QPushButton *pushButtonBrowseDst;
    QPushButton *pushButtonSave;
    QWidget *widget1;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEditIp;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *lineEditPort;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *lineEditHostName;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *lineEditWorkGroup;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(796, 653);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 0, 761, 91));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(7);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setLayoutDirection(Qt::RightToLeft);
        label->setMargin(13);

        horizontalLayout->addWidget(label);

        lineEditSrcFile = new QLineEdit(widget);
        lineEditSrcFile->setObjectName(QString::fromUtf8("lineEditSrcFile"));

        horizontalLayout->addWidget(lineEditSrcFile);

        pushButtonBowseSrc = new QPushButton(widget);
        pushButtonBowseSrc->setObjectName(QString::fromUtf8("pushButtonBowseSrc"));

        horizontalLayout->addWidget(pushButtonBowseSrc);

        pushButtonBrowseLoad = new QPushButton(widget);
        pushButtonBrowseLoad->setObjectName(QString::fromUtf8("pushButtonBrowseLoad"));

        horizontalLayout->addWidget(pushButtonBrowseLoad);

        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 100, 761, 91));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setSpacing(7);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setLayoutDirection(Qt::RightToLeft);

        horizontalLayout_2->addWidget(label_2);

        lineEditDstFile = new QLineEdit(layoutWidget);
        lineEditDstFile->setObjectName(QString::fromUtf8("lineEditDstFile"));

        horizontalLayout_2->addWidget(lineEditDstFile);

        pushButtonBrowseDst = new QPushButton(layoutWidget);
        pushButtonBrowseDst->setObjectName(QString::fromUtf8("pushButtonBrowseDst"));

        horizontalLayout_2->addWidget(pushButtonBrowseDst);

        pushButtonSave = new QPushButton(layoutWidget);
        pushButtonSave->setObjectName(QString::fromUtf8("pushButtonSave"));

        horizontalLayout_2->addWidget(pushButtonSave);

        widget1 = new QWidget(centralWidget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(20, 210, 391, 341));
        verticalLayout = new QVBoxLayout(widget1);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(widget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMargin(30);

        horizontalLayout_3->addWidget(label_3);

        lineEditIp = new QLineEdit(widget1);
        lineEditIp->setObjectName(QString::fromUtf8("lineEditIp"));

        horizontalLayout_3->addWidget(lineEditIp);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(widget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMargin(22);

        horizontalLayout_4->addWidget(label_4);

        lineEditPort = new QLineEdit(widget1);
        lineEditPort->setObjectName(QString::fromUtf8("lineEditPort"));

        horizontalLayout_4->addWidget(lineEditPort);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(widget1);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMargin(4);

        horizontalLayout_5->addWidget(label_5);

        lineEditHostName = new QLineEdit(widget1);
        lineEditHostName->setObjectName(QString::fromUtf8("lineEditHostName"));

        horizontalLayout_5->addWidget(lineEditHostName);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_6 = new QLabel(widget1);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_6->addWidget(label_6);

        lineEditWorkGroup = new QLineEdit(widget1);
        lineEditWorkGroup->setObjectName(QString::fromUtf8("lineEditWorkGroup"));

        horizontalLayout_6->addWidget(lineEditWorkGroup);


        verticalLayout->addLayout(horizontalLayout_6);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 796, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "source", 0, QApplication::UnicodeUTF8));
        pushButtonBowseSrc->setText(QApplication::translate("MainWindow", "Browse", 0, QApplication::UnicodeUTF8));
        pushButtonBrowseLoad->setText(QApplication::translate("MainWindow", "Load", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "destination", 0, QApplication::UnicodeUTF8));
        pushButtonBrowseDst->setText(QApplication::translate("MainWindow", "Browse", 0, QApplication::UnicodeUTF8));
        pushButtonSave->setText(QApplication::translate("MainWindow", "Save", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "Ip", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "port", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "hostname", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "workgroup", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
