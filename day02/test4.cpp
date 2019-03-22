//
// Created by wanlong3 on 2019/3/18.
//
#include <iostream>

using namespace std;

int main() {
//    int largeNum = 5000000;
//    short anotherNum{largeNum}; // error! Amend types
//    int anotherNum{largeNum}; // OK!
//    float someFloat{largeNum}; // error! An int may be narrowed
//    float someFloat{5000000}; // OK! 5000000 can be accomodated
/**
 * 使用c++11和其更高的版本。可不显式地指定变量的类型，而使用关键字auto
 */
 auto sss = true;
    auto coinFlippedHeads = true;
    auto largeNumber = 2500000000000;
    cout << "coinFlippedHeads = " << coinFlippedHeads;
    cout << " , sizeof(coinFlippedHeads) = " << sizeof(coinFlippedHeads) << endl;
    cout << "largeNumber = " << largeNumber;
    cout << " , sizeof(largeNumber) = " << sizeof(largeNumber) << endl;
    cout<<"-----------------------"<<endl;
     unsigned int STRICTLY_POSITIVE_INTEGER = 4562;
    return 0;
}
