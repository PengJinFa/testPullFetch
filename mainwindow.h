#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <future>
#include<thread>
#include<QDebug>
#include<utility>
#include<functional>
#include<chrono>
#include"global.h"
//test pull
namespace Ui {
class MainWindow;
}

int i=50;
int ii=50;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    static void TestThread(MainWindow* mw,std::promise<int>& prom);
    static void TestThread1(MainWindow* mw);
    void TestMyObject();
<<<<<<< HEAD
    int test=0;
=======

    int abc;

    float d;

    int test;
>>>>>>> origin/master



private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();


    void on_pushButton_5_clicked();

private:
    Ui::MainWindow *ui;
    std::thread _myThread;
};
<<<<<<< HEAD
float j=200;
int z=i-j;
=======
float j=20;
int z=i+j;
>>>>>>> origin/master

//class MyMainWindow
//{
//public:

//    ~MyMainWindow();
//    static MyMainWindow& GetHandle(){
//            return s_instance;
//        }
//private:

//    static unsigned int ThreadFunction(MyMainWindow * This);

//public:

//    std::thread _thread;
//    MainWindow* _mw;

//private:
//    static MyMainWindow s_instance;

//    MyMainWindow();
//}

#endif // MAINWINDOW_H
