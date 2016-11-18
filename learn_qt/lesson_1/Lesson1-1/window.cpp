#include "window.h"
#include <QPushButton>
#include <QProgressBar>
#include <QApplication>
#include <QSlider>
#include <string>

Window::Window(QWidget *parent) : QWidget(parent)
{
    //set the window fixed
    setFixedSize(300,300);

    //Create and position the button
    m_button = new QPushButton("Dima is a gay!", this);
    m_button->setGeometry(10,100,200,30);

    //This connection makes our application quit
    //connect(m_button, SIGNAL (clicked()), QApplication::instance(), SLOT (quit()));
    connect(this, SIGNAL (counterReached()), QApplication::instance(), SLOT (quit()));

    m_bar = new QProgressBar(this);
    m_bar->setRange(0,100);
    m_bar->setValue(0);
    m_bar->setGeometry(10,10,180,30);

    m_slider = new QSlider(this);
    m_slider->setOrientation(Qt::Horizontal);
    m_slider->setRange(0,100);
    m_slider->setValue(0);
    m_slider->setGeometry(10,50,180,30);

    QObject::connect(m_slider, SIGNAL (valueChanged(int)), m_bar, SLOT (setValue(int)));

    m_button->setCheckable(true);

    connect(m_button, SIGNAL (clicked(bool)), this, SLOT (slotButtonClicked(bool)));



}

void Window::slotButtonClicked(bool checked)
{
    if(checked)
    {
        m_button->setText("Checked");
    }
    else
    {
        m_button->setText("Hello world!");
    }

    m_clickCount++;

    if(m_clickCount >= 10)
        emit counterReached();
}
