#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    world = new Engine1();

    connect(world, SIGNAL(TimeChanged(QString)),ui->satusOfgame,SLOT(showMessage(QString)));


}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_timeB_clicked()
{
    world->ChangeTime();

}

void MainWindow::on_pushButton_clicked()
{
        int n = 1;
}
