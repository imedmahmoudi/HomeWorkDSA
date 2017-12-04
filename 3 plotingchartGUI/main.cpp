//this code is cable of plotting Barcharts based on a given data


#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtCharts/QChartView>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QLegend>
#include <QtCharts/QBarCategoryAxis>

QT_CHARTS_USE_NAMESPACE

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    QBarSet *set0 = new QBarSet("open");
    QBarSet *set1 = new QBarSet("high");
    QBarSet *set2 = new QBarSet("low");
    QBarSet *set3 = new QBarSet("close");
    QBarSet *set4 = new QBarSet("volume devided by 1000");

    *set0 << 84.2700 << 84.2600 << 84.0600 << 84.6800 << 84.8299 << 83.6350;
    *set1 << 84.3200 << 84.3300 << 84.3500 << 84.9172 << 84.8400 << 83.6600;
    *set2 << 84.1600 << 84.0400 << 84.0400 << 84.5900 << 84.6050 << 83.5600;
    *set3 << 84.2000 << 84.1000 << 84.2700 << 84.8300 << 84.6500 << 83.6100;
    *set4 << 46.96263 << 52.8485 << 67.1710 << 42.3433 << 73.0278 << 25.4822;

    QBarSeries *series = new QBarSeries();
    series->append(set0);
    series->append(set1);
    series->append(set2);
    series->append(set3);
    series->append(set4);


    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Alpha advantages Data");
    chart->setAnimationOptions(QChart::SeriesAnimations);

    QStringList categories;
    categories << "Day 27/11" << "Day 28/11" << "Day 29/11" << "Day 30/11" << "Day 1/12" << "Day 2/12";
    QBarCategoryAxis *axis = new QBarCategoryAxis();
    axis->append(categories);
    chart->createDefaultAxes();
    chart->setAxisX(axis, series);

    chart->legend()->setVisible(true);
    chart->legend()->setAlignment(Qt::AlignBottom);

    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    QMainWindow window;
    window.setCentralWidget(chartView);
    window.resize(420, 300);
    window.show();


    return a.exec();
}
