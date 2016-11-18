#include "notepad.h"
#include <QVBoxLayout>
#include <QMessageBox>
#include <QApplication>
#include <QMenuBar>
#include <QAction>
#include <QFileDialog>
#include <QFile>
#include <QIODevice>
#include <QTextStream>

Notepad::Notepad()
{
    //This is Notepad's constructor. We use it to set up our gui!

    m_textedit = new QTextEdit;
    m_qbutton = new QPushButton(tr("Quit"));

    connect(m_qbutton, SIGNAL (clicked()), this, SLOT (quit()));

    m_openAction = new QAction(tr("&Open"), this);
    m_saveAction = new QAction(tr("&Save"), this);
    m_exitAction = new QAction(tr("&Exit"), this);

    connect(m_openAction, SIGNAL (triggered()), this, SLOT (open()));
    connect(m_saveAction, SIGNAL (triggered()), this, SLOT (save()));
    connect(m_exitAction, SIGNAL (triggered()), this, SLOT (quit()));


    //setting up the menu
    m_fileMenu = menuBar()->addMenu("File");
    m_fileMenu->addAction(m_openAction);
    m_fileMenu->addAction(m_saveAction);
    //m_fileMenu->addSeperator();
    m_fileMenu->addAction(m_exitAction);


    setWindowTitle(tr("Notepad"));
    setCentralWidget(m_textedit);

}

void Notepad::quit()
{
    QMessageBox messageBox;
    messageBox.setWindowTitle(tr("Notepad"));
    messageBox.setText(tr("Do you really wanna quit?"));
    messageBox.setStandardButtons(QMessageBox::Yes|QMessageBox::No);
    messageBox.setDefaultButton(QMessageBox::No);
    if(messageBox.exec() == QMessageBox::Yes)
        QApplication::quit();

}

void Notepad::open()
{
    QString fileName = QFileDialog::getOpenFileName(this, "Open File","","Text Files (*.txt);;C++ Files (*.cpp *.h)");

    if(fileName != "")
    {
        QFile file(fileName);
        if(!file.open(QIODevice::ReadOnly))
        {
            QMessageBox::critical(this, ("Error"),"Could not open file!");
            return;
        }

        QTextStream in(&file);
        m_textedit->setText(in.readAll());
        file.close();
    }


}

void Notepad::save()
{
    QString fileName = QFileDialog::getSaveFileName(this, "Save File", "", "Text Files (*.txt);;C++ Files (*.cpp *.h)");

    if(fileName != "")
    {
        QFile file(fileName);
        if(!file.open(QIODevice::WriteOnly))
        {

        }else  {
            QTextStream stream(&file);
            stream << m_textedit->toPlainText();
            stream.flush();
            file.close();
        }
    }

}
