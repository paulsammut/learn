#ifndef NOTEPAD_H
#define NOTEPAD_H

#include <QObject>
#include <QTextEdit>
#include <QPushButton>
#include <QWidget>
#include <QMainWindow>
#include <QAction>

class Notepad : public QMainWindow
{
    Q_OBJECT  //necessary for every QObject class.

public:
    Notepad();

private slots:
    void quit();  //this slot is now declared and can be connected to a signal.
    void open();
    void save();

private:
    QTextEdit *m_textedit;
    QPushButton *m_qbutton;

    QAction *m_openAction;
    QAction *m_saveAction;
    QAction *m_exitAction;

    QMenu *m_fileMenu;
};

#endif // NOTEPAD_H
