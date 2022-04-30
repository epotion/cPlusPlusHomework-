/*
*FileName: T6_21.cpp
* Auther:  Junhao Gan
* E-mail:  32845288@qq.com
* Date:    Apr 9th, 2022
* College: School of Computer Science and Information Engineering
* Function:Program to print number of elapsed seconds between n and n.
*/
#include <iostream>
using namespace std;
long numSeconds(int, int, int);

int main(int argc, const char* argv[]) 
{
    int h1, m1, s1;
    int h2, m2, s2;
    cout << "Enter hours minutes seconds (start time): ";
    cin >> h1 >> m1 >> s1;
    cout << "Enter hours minutes seconds (finish time): ";
    cin >> h2 >> m2 >> s2;
    cout << "Difference: "<< (numSeconds(h2, m2, s2) - numSeconds(h1, m1, s1))<< " seconds." << endl;

    return 0;
}

long numSeconds(int h, int m, int s) {
    
    if (h > 12) 
{
        h -= 12;
    }

    return ((h * 60) * 60) + (m * 60) + s;
}
