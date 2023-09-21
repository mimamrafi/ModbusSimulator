#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QProcess>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_PB_Client_clicked()
{
    QString program = "HDS Client.exe";

    // Create a QProcess to run the external application
    QProcess *process = new QProcess(this);

    // Start the external application
    process->start(program);

    // Optionally, you can handle errors or capture the output:
    if (!process->waitForStarted())
    {
        // Handle an error if the application fails to start
        qDebug() << "Error: Failed to start the application.";
    }
    else
    {
        // Optionally, you can capture and process the output here
    }
}


void MainWindow::on_PB_Custom_clicked()
{
    QString program = "HDS Modbus Custom.exe";

    // Create a QProcess to run the external application
    QProcess *process = new QProcess(this);

    // Start the external application
    process->start(program);

    // Optionally, you can handle errors or capture the output:
    if (!process->waitForStarted())
    {
        // Handle an error if the application fails to start
        qDebug() << "Error: Failed to start the application.";
    }
    else
    {
        // Optionally, you can capture and process the output here
    }
}




void MainWindow::on_PB_Server_clicked()
{
    QString program = "HDS Server.exe";

    // Create a QProcess to run the external application
    QProcess *process = new QProcess(this);

    // Start the external application
    process->start(program);

    // Optionally, you can handle errors or capture the output:
    if (!process->waitForStarted())
    {
        // Handle an error if the application fails to start
        qDebug() << "Error: Failed to start the application.";
    }
    else
    {
        // Optionally, you can capture and process the output here
    }
}

