#include "dialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dialog w;
    w.show();

    return a.exec();
}

// This is a really simple program that I whipped up by following this tutorial: https://www.youtube.com/watch?v=5JE5ek_oN_0
