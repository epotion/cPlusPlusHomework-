/*
*FileName: T4_26.cpp
* Auther:  Junhao Gan
* E-mail:  32845288@qq.com
* Date:    Mar 8th, 2022
* College: School of Computer Science and Information Engineering
* Function: Determine if a five-digit number is a palindrome.
*/
#include<iostream>
using namespace std;
int main()
{
    int num,a,b,c,d,e;
    cout << "Enter a 5-digit number: ";
    cin >> num;//input a 5-digit number;
    a = num/10000;
    b = num/1000%10;
    c = num/100%10;
    d = num/10%10;
    e = num%10;
    if(a==e&&b==d)
    {
       cout << "The number is a palindrome" << endl;
    }
    else
    {
        cout << "The number isn't a palindrome" << endl;
    }//varify palindrome
    return 0;

}
