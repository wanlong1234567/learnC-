#include <iostream>
/*
 * https://blog.csdn.net/jinxin70/article/details/85043873
 * clion中无法共存多个main函数，因为无法编译
 * 做法：1.在CMakeLists.txt中add_executable（）增加一个
 * 例如括号里面写(F test.cpp)等，其中F要与另一个的不一样
 *       2.在debug工具里选择要执行的是哪一个。
 *       std::表示命名空间
 */
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}