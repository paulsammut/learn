#ifndef NOTEPAD_H
#define NOTEPAD_H

#include <QMainWindow>
#include <QtSerialPort/QSerialPort>

namespace Ui {
class Notepad;
}

class Notepad : public QMainWindow
{
    Q_OBJECT

public:
    explicit Notepad(QWidget *parent = 0);
    ~Notepad();

private slots:

//    void writeData(const QByteArray &data);
    void readData();

    void on_button_Quit_clicked();

    void on_button_Connect_clicked();

    void on_button_Disconnect_clicked();

private:
    Ui::Notepad *ui;
    QSerialPort *serial;
    bool portOpen;
};

#endif // NOTEPAD_H
