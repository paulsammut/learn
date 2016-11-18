#include <QApplication>
#include <QPushButton>

int main(int argc, char **argv)
{
    QApplication app (argc, argv);

    QWidget window;
    window.setFixedSize(500, 500);

    QPushButton *buttonInfo = new QPushButton("Info", &window);
    buttonInfo->setGeometry(10, 10, 200, 60);

    QPushButton *buttonQuit = new QPushButton("Quit", &window);
    buttonQuit->setGeometry(10, 100, 200, 60);

    window.show();

    // Add your code here

    window.connect(buttonQuit, SIGNAL (clicked()), QApplication::instance(), SLOT (quit()));

    window.connect(buttonInfo, SIGNAL (clicked()), QApplication::instance(), SLOT(aboutQt()));

    return app.exec();
}
