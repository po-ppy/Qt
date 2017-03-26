#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QMessageBox>
#include <QRegExp>
#include <QRegExpValidator>
#include <QIntValidator>
#include <QFileDialog>
#include <QFile>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QRegExp re("^(?:(?:25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)\\.){3}(?:25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)$");
    QRegExpValidator *reVali = new QRegExpValidator(re);
    ui->lineEditIp->setValidator(reVali);

    QIntValidator *intVali = new QIntValidator(0,65535);
    ui->lineEditPort->setValidator(intVali);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonBowseSrc_clicked()
{
    QString src = QFileDialog::getOpenFileName(this,tr("config"),tr("."),tr("Text File(*.txt);;All files(*)"));
    if(src.isEmpty()){
        return;
    }else{
        ui->lineEditSrcFile->setText(src);
    }
}

void MainWindow::on_pushButtonBrowseLoad_clicked()
{
    QString strSrc = ui->lineEditSrcFile->text();
    if(strSrc.isEmpty()){
        return;
    }
    QFile fileIn(strSrc);
    if(!fileIn.open(QIODevice::ReadOnly)){
        QMessageBox::warning(this,tr("error"),tr("error info:") + fileIn.errorString());
        return;
    }
    while(!fileIn.atEnd()){
        QByteArray baLine = fileIn.readLine();
        baLine = baLine.trimmed();
        if(baLine.startsWith('#')){
            continue;
        }
        AnalyzeOneLine(baLine);
    }
        QMessageBox::information(this,tr("congratuation!"),tr("Load successfully!!!"));
}

void MainWindow::on_pushButtonBrowseDst_clicked()
{
    QString strDst = QFileDialog::getSaveFileName(this,tr("SAVE"),tr("."),tr("Text File(*.txt);;All file(*)"));
    if(strDst.isEmpty()){
        QMessageBox::warning(this,tr("wrong"),tr("may be open a save file is wrong"));
        return;
    }
    else{
    ui->lineEditDstFile->setText(strDst);
    }
}

void MainWindow::on_pushButtonSave_clicked()
{
    QString strDst = ui->lineEditDstFile->text();

    QString strIP = ui->lineEditIp->text();
    QString strPort = ui->lineEditPort->text();
    QString strHostname = ui->lineEditHostName->text();
    QString strWorkGroup = ui->lineEditWorkGroup->text();

    if(strIP.isEmpty() || strPort.isEmpty() || strHostname.isEmpty() || strWorkGroup.isEmpty()){
        QMessageBox::warning(this,tr("WARNING"),tr("May be someone is null,check it!"));
        return;
    }
    QFile fileOut(strDst);
    if(!fileOut.open(QIODevice::WriteOnly|QIODevice::Truncate|QIODevice::Text)){
        QMessageBox::warning(this,tr("warning"),tr("fall to open,info:") + fileOut.errorString());
        return;
    }
    QByteArray baTemp = "ip = ";
    baTemp += strIP.toLocal8Bit() + "\n";
    fileOut.write(baTemp);

    baTemp = "Port = ";
    baTemp += strPort.toLocal8Bit() + "\n";
    fileOut.write(baTemp);

    baTemp = "Hostname = ";
    baTemp += strHostname.toLocal8Bit() + "\n";
    fileOut.write(baTemp);

    baTemp = "WorkGroup = ";
    baTemp += strWorkGroup.toLocal8Bit() + "\n";\
    fileOut.write(baTemp);

    QMessageBox::information(this,tr("congratuation"),tr("saved successfully!"));

}

void MainWindow::AnalyzeOneLine(const QByteArray &baLine){
    QList<QByteArray> list = baLine.split('=');
    if(list.count() < 2){
        return;
    }
    QByteArray optionName = list[0].trimmed().toLower();
    QByteArray optionValue = list[1].trimmed();
    QString strValue = QString::fromLocal8Bit(optionValue);
    if("ip" == optionName){
        ui->lineEditIp->setText(strValue);
        return;
    }
    if("port" == optionName){
        ui->lineEditPort->setText(strValue);
        return;
    }
    if("hostname" == optionName){
        ui->lineEditHostName->setText(strValue);
        return;
    }
    if("workgroup" == optionName){
        ui->lineEditWorkGroup->setText(strValue);
        return;
    }
}
