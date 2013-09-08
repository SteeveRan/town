#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "stdafx.h"
#include <QMainWindow>



namespace Ui {
class MainWindow;
}


class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    Engine1 *world;
    
private slots:


    void on_timeB_clicked();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
