#ifndef GLOBAL_H
#define GLOBAL_H
#include<QString>
#include<mutex>
#include<condition_variable>

extern"C" int global_variable;//声明一个全局变量a
extern"C" bool global_variable2;

typedef struct global_struct
{
    std::mutex mtx; // 全局互斥锁.
    std::condition_variable cv; // 全局条件变量.
    bool ready; // 全局标志位.
    int ID;
    QString name;
    int* grade;
    global_struct():ready(false),ID(0000),name("xiao ming"),grade(nullptr){}
}GlobalStruct;

extern GlobalStruct student;
#endif // GLOBAL_H
