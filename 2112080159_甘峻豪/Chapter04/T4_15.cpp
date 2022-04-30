/*
*FileName: T4_15.cpp
* Auther:  Junhao Gan
* E-mail:  32845288@qq.com
* Date:    Mar 7th, 2022
* College: School of Computer Science and Information Engineering
* Function: Sales commission
*/
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double a,b;
    while(true)
    {
        cout << "Enter sales in dollars (-1 to end): ";
        cin >> a;
        if(a==-1)
        {
            break;
        }
        b = 200 + (a*0.09);
        cout << "Salary is: "<<"$"<<setiosflags(ios::fixed)<<setprecision(2)<<b<<endl;
    }
    
    return 0;
}
