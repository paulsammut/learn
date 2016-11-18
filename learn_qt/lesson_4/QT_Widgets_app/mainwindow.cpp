#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtSerialPort/QSerialPort>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    m_serPort = new QSerialPort(this);


}

MainWindow::~MainWindow()
{
    delete ui;
    delete m_serPort;
}
