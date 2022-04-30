/*
*FileName: T6_27.cpp
* Auther:  Junhao Gan
* E-mail:  32845288@qq.com
* Date:    Apr 9th, 2022
* College: School of Computer Science and Information Engineering
* Function:Find the smallest number.
*/
#include<iostream>
using namespace std;
double min(double a, double b, double c);
int main()
{
	double x, y, z;
	cout << "Input 3 double numbers: ";
	cin >> x >> y >> z;
	cout << "the smallest number is " << min(x, y, z) << endl;
	return 0;
}
double min(double a, double b, double c)
{
	if (a < b)
	{
		if (a < c)
		{
			return a;
		}
		else
		{
			return c;
		}
	}
	else
	{
		if (b < c)
		{
			return b;
         }
		else
		{
			return c;
		}
	}
}