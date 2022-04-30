/*
*FileName: T5_12.cpp
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
	for (int i = 1; i <= 10; ++i)
	{
		for (int j = 1; j <= i; ++j)
		{
			cout << "*";
         }
		cout << endl;
	}
	for (int a = 1; a <= 10; ++a)
	{
		for (int b = 10; b >= a; --b)
		{
			cout << "*";
		}
		cout << endl;
	}
	for (int c = 1; c <= 10; ++c)
	{
		for (int d = 1; d <= 10; ++d)
		{
			if (d < c)
			{
				cout << " ";
			}
			else
			{
				cout << "*";
			}
		}
		cout << endl;
	}
	for (int c = 1; c <= 10; ++c)
	{
		for (int d = 10; d >=1; --d)
		{
			if (d > c)
			{
				cout << " ";
			}
			else
			{
				cout << "*";
			}
		}
		cout << endl;
	}
	system("pause");
	return 0;
}