/*
*FileName: T5_16.cpp
* Auther:  Junhao Gan
* E-mail:  32845288@qq.com
* Date:    Mar 4th, 2022
* College: School of Computer Science and Information Engineering
* Function:
*/
#include<iostream>
using namespace std;
int main()
{
	double rate = 0.05;
	int a,b = 1;
	int n = 10;
	double p = 1000;
	for (int i = 1; i <= n; ++i)
	{
		p *= (1 + rate);
		a = p * 100;
		if (a % 100 < 10)
		{
			b = a % 100 * 10;
		}
		else
		{
			b = a % 100;
		}
		if (0 != b)
		{
			cout << a / 100 << "." << b << endl;
		}
		else
		{
			cout << a / 100 << "." << "00" << endl;
		}
	}
	return 0;
}