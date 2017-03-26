/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

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
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(796, 653);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 0, 761, 91));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(7);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setLayoutDirection(Qt::RightToLeft);
        label->setMargin(13);

        horizontalLayout->addWidget(label);

        lineEditSrcFile = new QLineEdit(widget);
        lineEditSrcFile->setObjectName(QStringLiteral("lineEditSrcFile"));

        horizontalLayout->addWidget(lineEditSrcFile);

        pushButtonBowseSrc = new QPushButton(widget);
        pushButtonBowseSrc->setObjectName(QStringLiteral("pushButtonBowseSrc"));

        horizontalLayout->addWidget(pushButtonBowseSrc);

        pushButtonBrowseLoad = new QPushButton(widget);
        pushButtonBrowseLoad->setObjectName(QStringLiteral("pushButtonBrowseLoad"));

        horizontalLayout->addWidget(pushButtonBrowseLoad);

        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 100, 761, 91));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setSpacing(7);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setLayoutDirection(Qt::RightToLeft);

        horizontalLayout_2->addWidget(label_2);

        lineEditDstFile = new QLineEdit(layoutWidget);
        lineEditDstFile->setObjectName(QStringLiteral("lineEditDstFile"));

        horizontalLayout_2->addWidget(lineEditDstFile);

        pushButtonBrowseDst = new QPushButton(layoutWidget);
        pushButtonBrowseDst->setObjectName(QStringLiteral("pushButtonBrowseDst"));

        horizontalLayout_2->addWidget(pushButtonBrowseDst);

        pushButtonSave = new QPushButton(layoutWidget);
        pushButtonSave->setObjectName(QStringLiteral("pushButtonSave"));

        horizontalLayout_2->addWidget(pushButtonSave);

        widget1 = new QWidget(centralWidget);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(20, 210, 391, 341));
        verticalLayout = new QVBoxLayout(widget1);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(widget1);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMargin(30);

        horizontalLayout_3->addWidget(label_3);

        lineEditIp = new QLineEdit(widget1);
        lineEditIp->setObjectName(QStringLiteral("lineEditIp"));

        horizontalLayout_3->addWidget(lineEditIp);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(widget1);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMargin(22);

        horizontalLayout_4->addWidget(label_4);

        lineEditPort = new QLineEdit(widget1);
        lineEditPort->setObjectName(QStringLiteral("lineEditPort"));

        horizontalLayout_4->addWidget(lineEditPort);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_5 = new QLabel(widget1);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMargin(4);

        horizontalLayout_5->addWidget(label_5);

        lineEditHostName = new QLineEdit(widget1);
        lineEditHostName->setObjectName(QStringLiteral("lineEditHostName"));

        horizontalLayout_5->addWidget(lineEditHostName);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_6 = new QLabel(widget1);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_6->addWidget(label_6);

        lineEditWorkGroup = new QLineEdit(widget1);
        lineEditWorkGroup->setObjectName(QStringLiteral("lineEditWorkGroup"));

        horizontalLayout_6->addWidget(lineEditWorkGroup);


        verticalLayout->addLayout(horizontalLayout_6);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 796, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "source", Q_NULLPTR));
        pushButtonBowseSrc->setText(QApplication::translate("MainWindow", "Browse", Q_NULLPTR));
        pushButtonBrowseLoad->setText(QApplication::translate("MainWindow", "Load", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "destination", Q_NULLPTR));
        pushButtonBrowseDst->setText(QApplication::translate("MainWindow", "Browse", Q_NULLPTR));
        pushButtonSave->setText(QApplication::translate("MainWindow", "Save", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Ip", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "port", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "hostname", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "workgroup", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
