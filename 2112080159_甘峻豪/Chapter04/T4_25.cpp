/*
*FileName: T4_25.cpp
* Auther:  Junhao Gan
* E-mail:  32845288@qq.com
* Date:    Mar 8th, 2022
* College: School of Computer Science and Information Engineering
* Function: Asterisk square
*/
#include<iostream>
using namespace std;
int main()
{
    for(int i = 1;i<6;i++)
    {
        for(int j = 1;j<6;j++)
        {
            if(i>1&&i<5)
            {
                if(j>1&&j<5)
                {
                    cout << " ";
                }
                else
                {
                    cout << "*";
                }
            }
            
            if(i==1||i==5)
            {
                cout << "*" ;
            }
            
        }
        cout << endl;
    }
    return 0;
}
