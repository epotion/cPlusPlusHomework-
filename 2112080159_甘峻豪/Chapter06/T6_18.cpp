/*
*FileName: T6_18.cpp
* Auther:  Junhao Gan
* E-mail:  32845288@qq.com
* Date:    Apr 9th, 2022
* College: School of Computer Science and Information Engineering
* Function:Exponentiation computation.
*/
#include<iostream>
using namespace std;
int integerPower(int base, int exponent);
int main()
{
	int b = 1;
	int e = 1;
	cin >> b >> e;
	cout << integerPower(b, e) << endl;
}
int integerPower(int base, int exponent)
{
	int totals = base;
	for (int i = 1; i <exponent; ++i)
	{
		totals *= base;
	}
	return totals;
}