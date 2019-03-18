//
// Created by wanlong3 on 2019/3/16.
//
#include <iostream>

using namespace std;
int x = 0;
int y = 1;

//上面的x,y叫做全局变量
void acculmate() {
    int z = x + y;
    cout << "x+y=" << z << endl;
}
/**
 * 全局变量可以在多个main方法中来使用这个变量
 * 而不是像局部变量一样只作用于少数的作用域中
 * @return
 */
int main() {
    acculmate();
    cout << y << endl;
}
