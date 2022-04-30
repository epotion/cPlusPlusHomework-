/*
*FileName: T6_28.cpp
* Auther:  Junhao Gan
* E-mail:  32845288@qq.com
* Date:    Apr 9th, 2022
* College: School of Computer Science and Information Engineering
* Function:Program to test whether a number is perfect or not.
*/
#include <iostream>
using namespace std;
bool isPerfect(long);
int main()
{
    cout << "Perfect number between 1 and 1000: " << endl;
    for (long i = 1; i <= 1000; i++) {
        //perfect numbers
        if (1==isPerfect(i))
        {
            cout << i << ":" << "\t";
            //divisors
            for (long j = 1; j < i; j++)
            {
                if (i % j == 0)
                {
                    cout << j << " ";
                }
            }
            cout << endl;
        }
    }

    cout << endl;
    return 0;
}
// checks
bool isPerfect(long n) 
{
    long sum = 0;
    for (long i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    return sum == n;
}
