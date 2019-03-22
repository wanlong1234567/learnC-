//
// Created by wanlong3 on 2019/3/18.
//

#include <iostream>
using namespace std;
/**
 * 编译器将枚举量转换为整数，
 * 每个枚举量都比前一个大1。
 * 也可以指定值，如果没有指定值的话，
 * 编译器认为起始值为0，也既North的值为0
 */
enum Carding{
    North = 25,
    South,
    East,
    West
};
int main(){
    cout << "Displaying directions and their symbolic values" << endl;
    cout << "North: " << North << endl;
    cout << "South: " << South << endl;
    return 0;
}
