#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QDir>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_lineEdit_editingFinished()
{

}

void MainWindow::on_pushButton_clicked()
{
    QDir *dir = new QDir(ui->lineEdit->text());
    dir->refresh();
    qDebug() << dir->mkdir(tr("kong"));
}
