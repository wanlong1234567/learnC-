//
// Created by wanlong3 on 2019/3/18.
//

#include <iostream>
using namespace std;
/**
 * constexpr可以将常量声明为函数
 * @return
 */
constexpr double GetPi(){
    return 22.0/7;
}
constexpr double TwicePi(){
    return 2*GetPi();
}
int main(){
    const double pi = 22.0 / 7;
    cout << "constant pi contains value " << pi << endl;
    cout << "constexpr GetPi() returns value " << GetPi() << endl;
    cout << "constexpr TwicePi() returns value " << TwicePi() << endl;
    return 0;
}