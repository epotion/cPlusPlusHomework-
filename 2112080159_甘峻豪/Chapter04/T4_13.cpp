/*
*FileName: T4_13.cpp
* Auther:  Junhao Gan
* E-mail:  32845288@qq.com
* Date:    Mar 7th, 2022
* College: School of Computer Science and Information Engineering
* Function: Gasoline mileage
*/
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double m,m1,g,g1,t;
    g1 = 0;
    m1 = 0;
     while(true)
     {
        
       cout << "Enter miles driven";
       cin >> m;
       if(m==-1)
       {
           break;
       }
       cout << "Enter gallons used: ";
       cin >> g;
       t = m / g;
       cout << "MPG this trip: " <<setprecision(8)<< t<<fixed << endl;
       m=m+m1;
       g=g+g1;
       t=m / g;
       cout << "Total MPG: " <<setprecision(8) << t<<fixed << endl;
       m1 = m;
       g1 = g;
     }
    return 0;
}
