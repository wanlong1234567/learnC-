//
// Created by wanlong3 on 2019/3/18.
//
#include <iostream>
using namespace std;
#define day1 6;
int main(){
    /**
     * c++不会报数组下标越界等错误
     * https://blog.csdn.net/hanchengxi/article/details/8509583
     */
    int myNumbers [5] = {34, 56, -21, 5002, 365};
    cout << "First element at index 0: " << myNumbers [5] << endl;
    return 0;
}