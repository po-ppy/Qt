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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QRadioButton *YButton;
    QRadioButton *NButton;
    QRadioButton *R0Button;
    QRadioButton *R1Button;
    QRadioButton *R2Button;
    QRadioButton *R3Button;
    QGroupBox *groupBox;
    QRadioButton *radioButton_7;
    QRadioButton *radioButton_8;
    QRadioButton *radioButton_9;
    QRadioButton *radioButton_10;
    QPushButton *pushButton;
    QCommandLinkButton *commandLinkButton;
    QCheckBox *TriBox;
    QGroupBox *groupBox_2;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_5;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(730, 652);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        YButton = new QRadioButton(centralWidget);
        YButton->setObjectName(QStringLiteral("YButton"));
        YButton->setGeometry(QRect(110, 50, 105, 26));
        NButton = new QRadioButton(centralWidget);
        NButton->setObjectName(QStringLiteral("NButton"));
        NButton->setGeometry(QRect(240, 50, 105, 26));
        R0Button = new QRadioButton(centralWidget);
        R0Button->setObjectName(QStringLiteral("R0Button"));
        R0Button->setGeometry(QRect(110, 130, 105, 26));
        R1Button = new QRadioButton(centralWidget);
        R1Button->setObjectName(QStringLiteral("R1Button"));
        R1Button->setGeometry(QRect(240, 130, 105, 26));
        R2Button = new QRadioButton(centralWidget);
        R2Button->setObjectName(QStringLiteral("R2Button"));
        R2Button->setGeometry(QRect(360, 130, 105, 26));
        R3Button = new QRadioButton(centralWidget);
        R3Button->setObjectName(QStringLiteral("R3Button"));
        R3Button->setGeometry(QRect(480, 130, 105, 26));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(90, 180, 461, 131));
        radioButton_7 = new QRadioButton(groupBox);
        radioButton_7->setObjectName(QStringLiteral("radioButton_7"));
        radioButton_7->setGeometry(QRect(30, 50, 105, 26));
        radioButton_8 = new QRadioButton(groupBox);
        radioButton_8->setObjectName(QStringLiteral("radioButton_8"));
        radioButton_8->setGeometry(QRect(30, 100, 105, 26));
        radioButton_9 = new QRadioButton(groupBox);
        radioButton_9->setObjectName(QStringLiteral("radioButton_9"));
        radioButton_9->setGeometry(QRect(240, 50, 105, 26));
        radioButton_10 = new QRadioButton(groupBox);
        radioButton_10->setObjectName(QStringLiteral("radioButton_10"));
        radioButton_10->setGeometry(QRect(240, 100, 105, 26));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(570, 250, 83, 28));
        commandLinkButton = new QCommandLinkButton(centralWidget);
        commandLinkButton->setObjectName(QStringLiteral("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(570, 300, 101, 41));
        TriBox = new QCheckBox(centralWidget);
        TriBox->setObjectName(QStringLiteral("TriBox"));
        TriBox->setGeometry(QRect(120, 540, 89, 26));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(90, 360, 471, 161));
        checkBox_2 = new QCheckBox(groupBox_2);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(40, 30, 89, 26));
        checkBox_3 = new QCheckBox(groupBox_2);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));
        checkBox_3->setGeometry(QRect(40, 90, 89, 26));
        checkBox_4 = new QCheckBox(groupBox_2);
        checkBox_4->setObjectName(QStringLiteral("checkBox_4"));
        checkBox_4->setGeometry(QRect(200, 30, 89, 26));
        checkBox_5 = new QCheckBox(groupBox_2);
        checkBox_5->setObjectName(QStringLiteral("checkBox_5"));
        checkBox_5->setGeometry(QRect(200, 90, 89, 26));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 730, 26));
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
        YButton->setText(QApplication::translate("MainWindow", "YES", Q_NULLPTR));
        NButton->setText(QApplication::translate("MainWindow", "NO", Q_NULLPTR));
        R0Button->setText(QApplication::translate("MainWindow", "R0", Q_NULLPTR));
        R1Button->setText(QApplication::translate("MainWindow", "R1", Q_NULLPTR));
        R2Button->setText(QApplication::translate("MainWindow", "R2", Q_NULLPTR));
        R3Button->setText(QApplication::translate("MainWindow", "R3", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "GroupBox", Q_NULLPTR));
        radioButton_7->setText(QApplication::translate("MainWindow", "G0", Q_NULLPTR));
        radioButton_8->setText(QApplication::translate("MainWindow", "G2", Q_NULLPTR));
        radioButton_9->setText(QApplication::translate("MainWindow", "G1", Q_NULLPTR));
        radioButton_10->setText(QApplication::translate("MainWindow", "G3", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
        commandLinkButton->setText(QApplication::translate("MainWindow", "GO!!GO!!GO!!", Q_NULLPTR));
        TriBox->setText(QApplication::translate("MainWindow", "Tri", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "GroupBox", Q_NULLPTR));
        checkBox_2->setText(QApplication::translate("MainWindow", "CheckBox", Q_NULLPTR));
        checkBox_3->setText(QApplication::translate("MainWindow", "CheckBox", Q_NULLPTR));
        checkBox_4->setText(QApplication::translate("MainWindow", "CheckBox", Q_NULLPTR));
        checkBox_5->setText(QApplication::translate("MainWindow", "CheckBox", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
