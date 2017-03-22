#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    m_pGGroup = new QButtonGroup(this);
    m_pGGroup->addButton(ui->R0Button,0);
    m_pGGroup->addButton(ui->R1Button,1);
    m_pGGroup->addButton(ui->R2Button,2);
    m_pGGroup->addButton(ui->R3Button,3);

    m_pRGroup = new QButtonGroup(this);
    m_pRGroup->addButton(ui->YButton,0);
    m_pRGroup->addButton(ui->NButton,1);

    connect(m_pRGroup,SIGNAL(buttonClicked(int)),this,SLOT(RecvRGroup(int)));
    connect(m_pGGroup,SIGNAL(buttonClicked(int)),this,SLOT(RecvGGroup(int)));

    ui->YButton->setChecked(true);
    ui->R0Button->setChecked(true);

    ui->TriBox->setTristate(true);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::RecvRGroup(int id){
    switch (id) {
    case 0:
        qDebug() << tr("YES!!");
        break;
    case 1:
        qDebug() << tr("NO!!");
        break;
    default:
        break;
    }
}

void MainWindow::RecvGGroup(int id){
    switch (id) {
    case 0:
        qDebug() << tr("R0!!");
        break;
    case 1:
        qDebug() << tr("R1!!");
        break;
    case 2:
        qDebug() << tr("R2!!");
        break;
    case 3:
        qDebug() << tr("R3!!");
        break;
    default:
        break;
    }
}

void MainWindow::on_pushButton_clicked()
{
    QString str;
    int Rid = m_pRGroup->checkedId();
    switch (Rid) {
    case 0:
        str+=tr("YorN:YES!\r\n");
        break;
    case 1:
        str+=tr("YorN:NO!!\r\n");
        break;
    default:
        str+=tr("YorN:NONE!!\r\n");
        break;
    }

    int Gid = m_pGGroup->checkedId();
    switch (Gid) {
    case 0:
        str+=tr("G:G0!!\r\n");
        break;
    case 1:
        str+=tr("G:G1!!\r\n");
        break;
    case 2:
        str+=tr("G:G2!!\r\n");
        break;
    case 3:
        str+=tr("G:G3!!\r\n");
        break;
    default:
        str+=tr("G:NONE!!\r\n");
        break;
    }

    QMessageBox::information(this,tr("info"),str);
}

void MainWindow::checkTri(){
    int count = 0;
    if(ui->checkBox_2->isChecked()){
        count++;
    }

    if(ui->checkBox_3->isChecked()){
        count++;
    }
    if(ui->checkBox_4->isChecked()){
        count++;
    }
    if(ui->checkBox_5->isChecked()){
        count++;
    }

    if(count<1){
        ui->TriBox->setCheckState(Qt::Unchecked);
        return;
    }
    else if(count < 4){
        ui->TriBox->setCheckState(Qt::PartiallyChecked);
        return;
    }
    else{
        ui->TriBox->setCheckState(Qt::Checked);
        return;
    }
}

void MainWindow::on_commandLinkButton_clicked()
{
    QDesktopServices::openUrl( QUrl("https://www.google.com") );
}

void MainWindow::on_checkBox_2_toggled(bool checked)
{
    if(checked){
        checkTri();
    }
}

void MainWindow::on_checkBox_4_toggled(bool checked)
{
    if(checked){
        checkTri();
    }
}

void MainWindow::on_checkBox_3_toggled(bool checked)
{
    if(checked){
        checkTri();
    }
}

void MainWindow::on_checkBox_5_toggled(bool checked)
{
    if(checked){
        checkTri();
    }
}

void MainWindow::on_TriBox_toggled(bool checked)
{

}
