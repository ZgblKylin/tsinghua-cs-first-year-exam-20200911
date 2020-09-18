#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_open_triggered()
{
    ui->canvas->open();
}

void MainWindow::on_save_triggered()
{
    ui->canvas->save();
}

void MainWindow::on_clear_triggered()
{
    ui->canvas->clear();
}

void MainWindow::on_exit_triggered()
{
    QCoreApplication::exit(0);
}
