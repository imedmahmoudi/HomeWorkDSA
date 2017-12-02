#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(&first,SIGNAL(dataReadyRead(QByteArray)),this,SLOT(database(QByteArray)));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::database(QByteArray data)
{
QString dataString;
dataString = data;
ui->pushButton->setText(dataString);


}

void MainWindow::on_pushButton_clicked()
{
    first.makeRequest("https://www.alphavantage.co/query?function=TIME_SERIES_INTRADAY&symbol=MSFT&interval=15min&outputsize=full&apikey=demo");
}
