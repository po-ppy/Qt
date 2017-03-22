#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QCompleter>
#include <QTextCharFormat>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_lineEdit_4_editingFinished();

    void on_textEdit_currentCharFormatChanged(const QTextCharFormat &format);

    void on_textEdit_textChanged();

    void on_pushButton_clicked(bool checked);

    void on_pushButton_2_clicked(bool checked);

    void on_pushButton_3_clicked(bool checked);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
