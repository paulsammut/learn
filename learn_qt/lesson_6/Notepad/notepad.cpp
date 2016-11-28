#include "notepad.h"
#include "ui_notepad.h"
#include <QtSerialPort/QSerialPort>


Notepad::Notepad(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Notepad)
{
    ui->setupUi(this);
    portOpen = false;

    // new serial port
    serial = new QSerialPort(this);
    ui->button_Connect->setEnabled(true);
    ui->button_Disconnect->setEnabled(false);

    connect(serial, SIGNAL(readyRead()), this, SLOT(readData()));
}

Notepad::~Notepad()
{
    delete ui;
    if(portOpen)
        serial->close();
}

void Notepad::on_button_Quit_clicked()
{
    qApp->quit();
}

void Notepad::on_button_Connect_clicked()
{
    serial->setPortName("/dev/ttyACM0");
    serial->setBaudRate(115200);
    serial->open(QIODevice::ReadWrite);
    ui->button_Connect->setEnabled(false);
    ui->button_Disconnect->setEnabled(true);
}
\
void Notepad::on_button_Disconnect_clicked()
{
     serial->close();
     ui->button_Connect->setEnabled(true);
     ui->button_Disconnect->setEnabled(false);
}

void Notepad::readData()
{
    QByteArray data = serial->readAll();
    ui->textBox->setText(data.toHex());
}
