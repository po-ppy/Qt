#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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
    void on_pushButtonBowseSrc_clicked();

    void on_pushButtonBrowseLoad_clicked();

    void on_pushButtonBrowseDst_clicked();

    void on_pushButtonSave_clicked();

private:
    Ui::MainWindow *ui;
    void AnalyzeOneLine(const QByteArray &baLine);
};

#endif // MAINWINDOW_H
