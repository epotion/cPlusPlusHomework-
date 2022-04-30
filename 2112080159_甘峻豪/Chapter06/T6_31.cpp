/*
*FileName: T6_31.cpp
* Auther:  Junhao Gan
* E-mail:  32845288@qq.com
* Date:    Apr 9th, 2022
* College: School of Computer Science and Information Engineering
* Function:Greatest common divisor.
*/
#include<iostream>
using namespace std;
int dixisor(int a, int b);
int main()
{
	int x = 0;
	int y = 0;
	cin >> x >> y;
    cout << dixisor(x, y) << endl;
	return 0;
}
int dixisor(int a, int b)
{
	int c = a % b;
	while (c != 0)
	{
		a = b;
		b = c;
		c = a % b;
	}
	if (a >= b)
	{
		return b;
	}
	else
	{
		return a;
	}

}
