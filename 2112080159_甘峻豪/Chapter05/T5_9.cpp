/*
*FileName: T5_9.cpp
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
    int f = 1;
    for (int i = 1; i <= 15; i += 2)
    {
        f *= i;
    }
    cout << f;
    return 0;
}