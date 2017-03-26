#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QPixmap>
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

void MainWindow::on_pushButton_clicked()
{
    QString src = QFileDialog::getOpenFileName(this,tr("OPEN"),tr("All file(*)"));
    if(src.isEmpty()){

        return;
    }
    else{
        ui->label->setPixmap(QPixmap(src));
    }
}
