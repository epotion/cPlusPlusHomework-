/*
*FileName: T6_36.cpp
* Auther:  Junhao Gan
* E-mail:  32845288@qq.com
* Date:    Apr 9th, 2022
* College: School of Computer Science and Information Engineering
* Function:exponent.
*/
#include<iostream>
using namespace std;
int power(int base, int exponent);
int main()
{
	int a,b;
	cin >> a >> b;
	cout << "result = " << power(a, b) << endl;;
}
int power(int base, int exponent) 
{
	if (0==exponent ) 
	{ 
		return 1; 
	}

	return base * power(base, exponent - 1);
}
