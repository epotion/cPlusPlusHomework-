/*
*FileName: T4_32.cpp
* Auther:  Junhao Gan
* E-mail:  32845288@qq.com
* Date:    Mar 4th, 2022
* College: School of Computer Science and Information Engineering
* Function: Determine if three sides represent a triangle.
*/
#include<iostream>
using namespace std;
int main()
{
    double a,b,c;
    cout << "Please enter three sides: ";
    cin >> a >> b >> c;
    if((a+b>c)&&(a+c>b)&&(b+c>a))
    {
        cout << "Sides can represent a triangle"<<endl;
    }
    else
    {
        cout << "can't represent a triangle"<<endl;
    }
    return 0;
}
