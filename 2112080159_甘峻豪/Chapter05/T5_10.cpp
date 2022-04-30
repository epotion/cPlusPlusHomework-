/*
*FileName: T5_10.cpp
* Auther:  Junhao Gan
* E-mail:  32845288@qq.com
* Date:    Mar 4th, 2022
* College: School of Computer Science and Information Engineering
* Function:
*/
#include<iostream>
using namespace std;
int main()
{

    int a = 1;
    for (int i = 1; i <= 5; ++i)
    {
        a *= i;
        cout << i << "\t" << a << endl; ;
    }

    return 0;
}