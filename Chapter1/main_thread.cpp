// Encode: UTF-8
#include<iostream>
#include<thread>    // 线程库

using namespace std;

void hello(){   // 添加了线程函数
    cout<< "Hello, Concurrent World! \n";
}

int main(int argc, char const *argv[])
{
    thread t(hello);    //添加了初始线程单元
    t.join();           //等到子线程结束
    return 0;
}
