#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // ✅ This must be inside the constructor
    connect(ui->buttonBack, &QPushButton::clicked, this, &MainWindow::onBackButtonClicked);
}

void MainWindow::onBackButtonClicked()
{
    QString month = ui->comboBoxMonth->currentText(); // get selected month
    QString goal = ui->lineEditGoal->text();          // get goal text

    // Print to the console (useful for debugging)
    qDebug() << "Selected month: " << month;
    qDebug() << "Goal entered: " << goal;

    // Optional: Close the window or switch screens
    // close();
}

MainWindow::~MainWindow()
{
    delete ui;
}
