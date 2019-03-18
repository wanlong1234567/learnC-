//
// Created by wanlong on 2019/3/16.
//
/*
 * 建议变量的声明在这个变量使用它不远的地方。这样他人就可以更容易了解其含义
 * 存储在变量中的数据被存储在内存中，计算机关闭或应用程序终止时，这个数据会丢失，除非
 * 存储到磁盘中去
 */
#include <iostream>

using namespace std;

int main() {
    int x = 10;
    int y = 20;
    int z = x*y;
    cout<<"x*y="<<z<<endl;
    return 0;
}
