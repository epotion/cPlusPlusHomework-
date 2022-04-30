/*
*FileName: T4_17.cpp
* Auther:  Junhao Gan
* E-mail:  32845288@qq.com
* Date:    Mar 8th, 2022
* College: School of Computer Science and Information Engineering
* Function: Find the biggest number.
*/
#include<iostream>
using namespace std;
int main()
{
    int c,n,n1,m,l;//counter,number,largest.
    c = 0;
    n = 0;
    n1 =0;
    m = 0;
    l = 0;
    while(true)
    {
      
      cout << "Please input your number: " ;
      cin >> n;
      cout << "Your's  number" << n;
      if(n > m)
      {
          m = n;
      }
     cout << "Your's biggest number: " << m << endl;
      c++;
      if(c==10)
      {
          break;
      }
}
    return 0;
}
