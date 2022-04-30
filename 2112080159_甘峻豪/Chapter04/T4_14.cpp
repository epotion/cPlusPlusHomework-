/*
*FileName: T4_14.cpp
* Auther:  Junhao Gan
* E-mail:  32845288@qq.com
* Date:    Mar 7th, 2022
* College: School of Computer Science and Information Engineering
* Function: Line of credit
*/
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double a,b,c,d,e,f,g;
    while(true)
    {
        cout << "Enter accout number (or -1 to quit): ";
        cin >> a;
        if(a==-1)
        {
            break;
        }
        cout << "Enter beginning balance: " ;
        cin >> b;
        cout << "Enter total charges: " ;
        cin >> c;
        cout << "Enter total credits: " ;
        cin >> d;
        cout << "Enter credit limit: " ;
        cin >> e;
        f = b + c - d;
        cout << "New balance is "<<setiosflags(ios::fixed)<<setprecision(2)<< f << endl;
        cout << "Account :     "<<setiosflags(ios::fixed)<<setprecision(2)<< a << endl;
        cout << "Credit limit: "<<setiosflags(ios::fixed)<<setprecision(2)<< e << endl;
        cout << "Balance:      "<<setiosflags(ios::fixed)<<setprecision(2)<< f << endl;
        if(f > e)
        {
            cout << "Credit Limit Exceeded."<<endl;
        }
}
    return 0;
}
