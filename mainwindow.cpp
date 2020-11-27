#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label->setVideo("/home/diego/QtProjects/TestTransparentVideo/Transparent video.avi");
    ui->label_2->setVideo("/home/diego/QtProjects/TestTransparentVideo/CocaCola Transparente.avi");
    ui->label_3->setVideo("/home/diego/QtProjects/TestTransparentVideo/pepsi.avi");


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    ui->label->play();
    ui->label_2->play();
    ui->label_3->play();
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->label->stop();
    ui->label_2->stop();
    ui->label_3->stop();
}
