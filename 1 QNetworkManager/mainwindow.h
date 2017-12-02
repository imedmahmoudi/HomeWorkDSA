#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "networkclass.h"
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
    void database(QByteArray data);


    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    NetworkClass first;

};

#endif // MAINWINDOW_H
