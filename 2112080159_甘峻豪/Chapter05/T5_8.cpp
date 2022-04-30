/*
*FileName: T5_8.cpp
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
    int n, a;
    int m = 999999;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a;
        if (a < m)
        {
            m = a;
        }

    }
    cout << m;
    return 0;
}