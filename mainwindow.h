#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSerialPort>        //提供访问串口的功能
#include <QSerialPortInfo>    //提供系统中存在的串口的信息
#include <QtCharts>
using namespace QtCharts;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void creatChart(void);
public slots:
    void serialPort_readyRead(void);
private:
    Ui::MainWindow *ui;
    QLineSeries *series0;
    QValueAxis *axisX;
    QValueAxis *axisY;
    QChart *chart;
    QChartView *chartView;
    QSerialPort serial;

    qreal cur_x_min;
    qreal cur_x_max;
    qreal cur_y_min;
    qreal cur_y_max;
};
#endif // MAINWINDOW_H
