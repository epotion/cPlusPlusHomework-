/*
*FileName: T4_20.cpp
* Auther:  Junhao Gan
* E-mail:  32845288@qq.com
* Date:    Mar 8th, 2022
* College: School of Computer Science and Information Engineering
* Function: Verify the validity of user input.
*/
#include<iostream>
using namespace std;
int main()
{
    
    unsigned int p = 0;//number of pass
    unsigned int f = 0;//number of failures
    unsigned int s = 1;//student counter
    
        while(s <= 10)
        {
            cout <<"Enter result (1 = pass,2 = fail)"<<endl;
            int r = 0;
            cin >> r;
            if(r!=1&&r!=2)  
            {
                cout << "Your's input was wrong!Please input again " <<endl;
            }                                                              
         else
         {
            if(r == 1)
           {
            p = p+1;
           } 
         else
         f = f + 1;
         s = s + 1;
         }
        }
    
      cout <<"passed"<<p <<"\nFailed"<<f <<endl;
      if(p>8)
      {
         cout << "Bonus to instructor" << endl;
      }

    

    return 0;
}
