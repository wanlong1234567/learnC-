//
// Created by wanlong3 on 2019/3/18.
//
#include <iostream>
#include <cstdint>
using namespace std;
int main(){
    /**
     * sizeof()：这个输出的长度单位为字节
     */
    cout << "Computing the size of some C++ inbuilt variable types" << endl;
    cout << "Size of bool: " << sizeof(bool) << endl;
    cout << "Size of char: " << sizeof(char) << endl;
    cout << "Size of unsigned short int: " << sizeof(unsigned short) << endl;
    cout << "Size of short int: " << sizeof(short) << endl;
    cout << "Size of unsigned long int: " << sizeof(unsigned long) << endl;
    cout << "Size of long: " << sizeof(long) << endl;
    cout << "Size of int: " << sizeof(int) << endl;
    cout << "Size of unsigned long long: "<< sizeof(unsigned long long)<< endl;
    cout << "Size of long long: " << sizeof(long long) << endl;
    cout << "Size of unsigned int: " << sizeof(unsigned int) << endl;
    cout << "Size of float: " << sizeof(float) << endl;
    cout << "Size of double: " << sizeof(double) << endl;
    cout << "The output changes with compiler, hardware and OS" << endl;
    //固定宽度整型
    int8_t x = 222222;
    cout<<"fdf："<<x<<endl;
    return 0;
}
