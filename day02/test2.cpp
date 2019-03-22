//
// Created by wanlong3 on 2019/3/18.
//
#include <iostream>

using namespace std;

int main() {
    unsigned short us = 65535;
    cout << "before:" << us;
    cout << "after:" << ++us;
    float pi = 3.14;
    double p = 22.0 / 7;
    int xx = -700'000;
    cout << "xxxx:" << xx << endl;
    //使用sizeof()确定变量的长度
    cout<<"size of an int:"<< sizeof(int)<<endl;
    return 0;
}
