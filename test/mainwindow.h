#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QButtonGroup>
#include <QDebug>
#include <QMessageBox>
#include <QDesktopServices>
#include <QUrl>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void checkTri();

public slots:
    void RecvRGroup(int id);
    void RecvGGroup(int id);
private slots:
    void on_pushButton_clicked();

    void on_commandLinkButton_clicked();

    void on_checkBox_2_toggled(bool checked);

    void on_checkBox_4_toggled(bool checked);

    void on_checkBox_3_toggled(bool checked);

    void on_checkBox_5_toggled(bool checked);

    void on_TriBox_toggled(bool checked);

private:
    Ui::MainWindow *ui;
    QButtonGroup *m_pRGroup;
    QButtonGroup *m_pGGroup;
};

#endif // MAINWINDOW_H
