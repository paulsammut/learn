#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>

class QPushButton; //donno why i have to do this....
class QProgressBar;
class QSlider;

class Window : public QWidget
{
    Q_OBJECT
public:
    explicit Window(QWidget *parent = 0);

private:
    QPushButton *m_button;
    QProgressBar *m_bar;
    QSlider *m_slider;
    int m_clickCount = 0;

signals:
    void counterReached();

public slots:

private slots:
    void slotButtonClicked(bool checked);
};

#endif // WINDOW_H
