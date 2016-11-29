/********************************************************************************
** Form generated from reading UI file 'notepad.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTEPAD_H
#define UI_NOTEPAD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Notepad
{
public:
    QWidget *centralWidget;
    QTextBrowser *textBox;
    QPushButton *button_Quit;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *button_Connect;
    QPushButton *button_Disconnect;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Notepad)
    {
        if (Notepad->objectName().isEmpty())
            Notepad->setObjectName(QStringLiteral("Notepad"));
        Notepad->resize(661, 427);
        centralWidget = new QWidget(Notepad);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        textBox = new QTextBrowser(centralWidget);
        textBox->setObjectName(QStringLiteral("textBox"));
        textBox->setGeometry(QRect(200, 20, 401, 311));
        button_Quit = new QPushButton(centralWidget);
        button_Quit->setObjectName(QStringLiteral("button_Quit"));
        button_Quit->setGeometry(QRect(10, 150, 96, 27));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 95, 63));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        button_Connect = new QPushButton(layoutWidget);
        button_Connect->setObjectName(QStringLiteral("button_Connect"));

        verticalLayout->addWidget(button_Connect);

        button_Disconnect = new QPushButton(layoutWidget);
        button_Disconnect->setObjectName(QStringLiteral("button_Disconnect"));

        verticalLayout->addWidget(button_Disconnect);

        Notepad->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Notepad);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 661, 23));
        Notepad->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Notepad);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Notepad->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Notepad);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Notepad->setStatusBar(statusBar);

        retranslateUi(Notepad);

        QMetaObject::connectSlotsByName(Notepad);
    } // setupUi

    void retranslateUi(QMainWindow *Notepad)
    {
        Notepad->setWindowTitle(QApplication::translate("Notepad", "Notepad", 0));
        button_Quit->setText(QApplication::translate("Notepad", "Quit", 0));
        button_Connect->setText(QApplication::translate("Notepad", "Connect", 0));
        button_Disconnect->setText(QApplication::translate("Notepad", "Disconnect", 0));
    } // retranslateUi

};

namespace Ui {
    class Notepad: public Ui_Notepad {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTEPAD_H
