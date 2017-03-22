#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QIntValidator>
#include <QFont>
#include <QColorDialog>
#include <QBrush>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lineEdit->setEchoMode(QLineEdit::Password);
    ui->lineEdit_2->setEchoMode(QLineEdit::PasswordEchoOnEdit);
    QStringList listCollege;
    listCollege << "nwsuaf" << "nnGGGG" << "ntest";
    QCompleter *cpCollege = new QCompleter(listCollege);
    cpCollege->setCaseSensitivity(Qt::CaseInsensitive);
    ui->lineEdit_3->setCompleter(cpCollege);

    ui->pushButton->setCheckable(true);
    ui->pushButton_2->setCheckable(true);
    ui->pushButton_3->setCheckable(true);
    QIntValidator *vali = new QIntValidator(0,72);
    ui->lineEdit_4->setValidator(vali);
    ui->lineEdit_4->setText(QString("").setNum(9));

    connect(ui->fontComboBox,SIGNAL(currentIndexChanged(QString)),ui->textEdit,SLOT(setFontFamily(QString)));
    ui->textEdit->setHtml("<b>粗体字的行<br></b>"
                             "<i>斜体字的行<br></i>"
                             "<u>下划线的行<br></u>"
                             "<font style=\"color:red;\">文本前景色<br></font>"
                             "<font style=\"background:yellow;\">文字背景色<br></font>"
                             "<font style=\"font-size:18pt;\">字号大小变化的行<br></font>"
                             "<font style=\"font-family:黑体;\">字体家族变化的行<br></font>"
                             );

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_4_clicked()
{
    QColor clr = QColorDialog::getColor(Qt::black);
    if(clr.isValid()){
        ui->textEdit->setTextColor(clr);
        QString strSS = tr("color:%1").arg(clr.name());
        ui->pushButton_4->setStyleSheet(strSS);
    }
}

void MainWindow::on_pushButton_5_clicked()
{
    QColor bgclr = QColorDialog::getColor(Qt::white);
    if(bgclr.isValid()){
        ui->textEdit->setTextBackgroundColor(bgclr);
        QString strbg = tr("background:%1").arg(bgclr.name());
        ui->pushButton_5->setStyleSheet(strbg);
    }
}

void MainWindow::on_lineEdit_4_editingFinished()
{
    int nFontSize = ui->lineEdit_4->text().toInt();
    ui->textEdit->setFontPointSize(nFontSize);
}

void MainWindow::on_textEdit_currentCharFormatChanged(const QTextCharFormat &format)
{
    if(format.fontWeight() == QFont::Bold)
       {
           ui->pushButton->setChecked(true);
       }
       else
       {
           ui->pushButton->setChecked(false);
       }
       //斜体检测
       ui->pushButton_2->setChecked( format.fontItalic() );
       //下划线检测
       ui->pushButton_3->setChecked( format.fontUnderline() );

       //文字前景色画刷，不一定有
       QBrush brushText = format.foreground();
       if( brushText != Qt::NoBrush )//有前景色画刷
       {
           QColor clrText = brushText.color();
           QString strSS = tr("color: %1").arg( clrText.name() );
           ui->pushButton_4->setStyleSheet( strSS );
       }
       else//没有前景色画刷 Qt::NoBrush
       {
           ui->pushButton_4->setStyleSheet("");
       }
       //文字背景画刷，不一定有
       QBrush brushBG = format.background();
       if( brushBG != Qt::NoBrush )//有背景色画刷
       {
           QColor clrBG = brushBG.color();
           QString strSSBG = tr("background: %1").arg(clrBG.name());
           ui->pushButton_5->setStyleSheet(strSSBG);
       }
       else//没背景画刷 Qt::NoBrush
       {
           ui->pushButton_5->setStyleSheet("");
       }

       //对于字号和字体家族检测，一定要用 QFont 的函数，不要用 QTextCharFormat 的函数
       //QTextCharFormat 的字号和字体家族函数不准，经常为 0 或空串
       QFont curFont = format.font();      //获取 QFont 成员
       int nFontSize = curFont.pointSize();//字号检测
       //如果是 px 形式， QFont::​pointSize() 函数返回 -1
       if( -1 == nFontSize ) //如果 pt 是 -1，是 px 格式
       {
           //如果是 px ，换算成 pt
           nFontSize = (int)( curFont.pixelSize() * 9.0 / 12.0 ) ;
       }
       ui->lineEdit_4->setText( QString("").setNum(nFontSize) );

       //字体家族检测
       QString strFontFamily = curFont.family();
       ui->fontComboBox->setCurrentText( strFontFamily );
}

void MainWindow::on_textEdit_textChanged()
{

}

void MainWindow::on_pushButton_clicked(bool checked)
{
    if(checked){
        ui->textEdit->setFontWeight(QFont::Bold);
    }
    else{
        ui->textEdit->setFontWeight(QFont::Normal);
    }
}

void MainWindow::on_pushButton_2_clicked(bool checked)
{
    ui->textEdit->setFontItalic(checked);
}

void MainWindow::on_pushButton_3_clicked(bool checked)
{
    ui->textEdit->setFontUnderline(checked);
}
