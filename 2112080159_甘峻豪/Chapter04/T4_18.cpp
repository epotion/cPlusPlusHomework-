/*
*FileName: T4_18.cpp
* Auther:  Junhao Gan
* E-mail:  32845288@qq.com
* Date:    Mar 8th, 2022
* College: School of Computer Science and Information Engineering
* Function: Form the output
*/
#include<iostream>
using namespace std;
int main()
{
    
    cout << "N" << "\t" << "10*N" << "\t" <<"100*N" << "\t" <<"1000*N" <<endl;
    cout << endl;
    for(int n = 1;n<6;n++)
    {
        cout << n << "\t" << 10*n << "\t" << 100*n << "\t" << 1000*n << endl;
    }
    return 0;
}
