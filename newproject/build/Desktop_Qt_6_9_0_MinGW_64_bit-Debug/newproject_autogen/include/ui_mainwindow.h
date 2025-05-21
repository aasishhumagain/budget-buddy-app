/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QComboBox *comboBoxMonth;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEditGoal;
    QPushButton *pushButton;
    QPushButton *buttonBack;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(320, 170, 121, 20));
        comboBoxMonth = new QComboBox(centralwidget);
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->setObjectName("comboBoxMonth");
        comboBoxMonth->setGeometry(QRect(330, 230, 82, 28));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(330, 200, 101, 20));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(332, 270, 81, 20));
        lineEditGoal = new QLineEdit(centralwidget);
        lineEditGoal->setObjectName("lineEditGoal");
        lineEditGoal->setGeometry(QRect(320, 290, 113, 28));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(330, 330, 83, 29));
        buttonBack = new QPushButton(centralwidget);
        buttonBack->setObjectName("buttonBack");
        buttonBack->setGeometry(QRect(20, 490, 83, 29));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Set Monthly Goals", nullptr));
        comboBoxMonth->setItemText(0, QCoreApplication::translate("MainWindow", "January", nullptr));
        comboBoxMonth->setItemText(1, QCoreApplication::translate("MainWindow", "February", nullptr));
        comboBoxMonth->setItemText(2, QCoreApplication::translate("MainWindow", "March", nullptr));
        comboBoxMonth->setItemText(3, QCoreApplication::translate("MainWindow", "April", nullptr));
        comboBoxMonth->setItemText(4, QCoreApplication::translate("MainWindow", "May", nullptr));
        comboBoxMonth->setItemText(5, QCoreApplication::translate("MainWindow", "June", nullptr));
        comboBoxMonth->setItemText(6, QCoreApplication::translate("MainWindow", "July", nullptr));
        comboBoxMonth->setItemText(7, QCoreApplication::translate("MainWindow", "August", nullptr));
        comboBoxMonth->setItemText(8, QCoreApplication::translate("MainWindow", "September", nullptr));
        comboBoxMonth->setItemText(9, QCoreApplication::translate("MainWindow", "October", nullptr));
        comboBoxMonth->setItemText(10, QCoreApplication::translate("MainWindow", "November", nullptr));
        comboBoxMonth->setItemText(11, QCoreApplication::translate("MainWindow", "December", nullptr));

        label_2->setText(QCoreApplication::translate("MainWindow", "Select Month:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Enter Goal:", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Set Goal", nullptr));
        buttonBack->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
