/*
*FileName: T6_41.cpp
* Auther:  Junhao Gan
* E-mail:  32845288@qq.com
* Date:    Apr 9th, 2022
* College: School of Computer Science and Information Engineering
* Function:Greatest common divisor.
*/
#include<iostream>
using namespace std;
int gcd(int x, int y);
int main()
{
	int x = 0;
	int y = 0;
	cin >> x >> y;
	cout << gcd(x, y) << endl;
	return 0;
}

	int gcd(int x, int y) 
{
    if (y == 0) {
        return x;
    } else {
        return gcd(y, x % y);
    }
}



