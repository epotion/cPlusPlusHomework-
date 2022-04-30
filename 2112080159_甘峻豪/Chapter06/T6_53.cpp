/*
*FileName: T6_53.cpp
* Auther:  Junhao Gan
* E-mail:  32845288@qq.com
* Date:    Apr 9th, 2022
* College: School of Computer Science and Information Engineering
* Function:Template testing using int, char and float.
*/

#include <iostream>
using namespace std;
// detemine the smallest of two arguments
template <typename S>
S maximum(S num1, S num2);

int main()
{
    cout << "minimum(66,67): " << maximum(66, 67) << endl;//int
    cout << "minimum(s, B): " << maximum('s', 'B') << endl;//char
    cout << "minimum(3.14, 6.28): " << maximum(3.14, 6.28) << endl;//float
    return 0;
}
template <typename S>
S maximum(S num1, S num2)
{
    return (num1 > num2) ? num1 : num2;
}

