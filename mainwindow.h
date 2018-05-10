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
//我的贡献（我是贡献者）+1
//第二个人克隆后的更改（我是管理者）

//第二次更改（我是管理者）+2
//我的贡献2（我是贡献者）
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    static void TestThread(MainWindow* mw,std::promise<int>& prom);
    static void TestThread1(MainWindow* mw);
    void TestMyObject();


private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();


    void on_pushButton_5_clicked();

private:
    Ui::MainWindow *ui;
    std::thread _myThread;
};

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
