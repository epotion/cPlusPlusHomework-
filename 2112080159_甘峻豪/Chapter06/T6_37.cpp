/*
*FileName: T6_37.cpp
* Auther:  Junhao Gan
* E-mail:  32845288@qq.com
* Date:    Apr 9th, 2022
* College: School of Computer Science and Information Engineering
* Function:Program to non recursively calculate fibonacci to n.
*/

#include <iostream>
using namespace std;
int fibonacci(int);

int main(int argc, const char* argv[]) 
{
    int n;

    cout << "Program to non recursively calculate fibonacci to n\n" <<endl;

    cout << "Enter n: ";
    cin >> n;

    cout << fibonacci(n)<<endl;

    return 0;
}

int fibonacci(int n) {
    int fib = 0;
    int firstTerm = 1;
    int secondTerm = 1;

    for (int i = 0; i < n; ++i) {
      
        if (0==i||1==i) 
        {
            fib = 1;
        }
        else {
            fib = firstTerm + secondTerm;

            firstTerm = secondTerm;
            secondTerm = fib;
        }
    }

    return fib;
}
