/*
*FileName: T4_27.cpp
* Auther:  Junhao Gan
* E-mail:  32845288@qq.com
* Date:    Mar 4th, 2022
* College: School of Computer Science and Information Engineering
* Function: Prints the decimal number of binary numbers
*/
#include<iostream>
#include<cmath>//A library of common mathematical functions.
using namespace std;

int main()
{
    int a,b,c;//decimal,bit,binary
    cout << "Please enter a decimal number: ";
    cin >> a;
    c = 0;
    for(int i = 0;a!=0;++i)
    {
        b = a%10;
        c = (b)*(pow(2,i))+c;
        a = a /10;
    }//Cyclic elimination of binary bits, one by one cyclic addition, get decimal number.
    cout << c;
    return 0;
}
