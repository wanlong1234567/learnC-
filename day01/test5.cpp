//
// Created by wanlong on 2019/3/16.
//
//变量的作用域和Java的基本上是一致的
#include <iostream>

using namespace std;

void acculate() {
    //局部变量
    int x = 1;
    int y = 2;
    int u = x * y;
    cout << "x*y=" << u << endl;
}

int main() {
    int u = 5;
    acculate();
    cout << "main()方法中的u的值：" << u << endl;
}

