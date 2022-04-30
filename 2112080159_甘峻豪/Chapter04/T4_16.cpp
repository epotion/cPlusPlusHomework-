/*
*FileName: T4_16.cpp
* Auther:  Junhao Gan
* E-mail:  32845288@qq.com
* Date:    Mar 7th, 2022
* College: School of Computer Science and Information Engineering
* Function: Salary Calculate 
*/
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double a,b,c,d;//hours,employee,salary
    while(true)
    {
        cout << "Enter hours worked (-1 to end): " ;
        cin >> a;
        if(a==-1)
        {
            break;
        }
        cout << "Enter hourly rate of the employee ($0.00): " ;
        cin >> b;
        if (a <= 40)
        {
            c=a*b;
        }
        else
        {
            d = (a-40)*b*1.5;
            c = d + 400;
        }
        cout << "Salary is "<<"$"<<setiosflags(ios::fixed)<<setprecision(2)<< c << endl;
        
    }
    return 0;
}
