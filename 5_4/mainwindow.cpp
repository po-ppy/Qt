#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->comboBox->setEditable(true);
    ui->dateEdit->setCalendarPopup(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}
