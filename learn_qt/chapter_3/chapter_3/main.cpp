#include <QApplication>
#include <QTextEdit>
#include <QPushButton>
#include <QVBoxLayout>
#include "notepad.h"

int main(int argc, char **argv)
{
    //This is the QApplication object. This manages application wide resources and is necessary to run any QT program that has a GUI.
    QApplication app(argc, argv);

    Notepad notepad;
    notepad.show();
    return app.exec();

}
