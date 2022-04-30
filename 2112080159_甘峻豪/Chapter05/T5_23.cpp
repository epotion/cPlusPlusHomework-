/*
*FileName: T5_23.cpp
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
	for (int i = 1; i <= 9; ++i)
	{
		for (int j = 1; j <= 9; ++j)
		{
			if (1 == i || 9 == i)
			{
				if (5 == j)
				{
					cout << "*";
				}
				else
				{
					cout << " ";
				}
			}
			if (2 == i || 8 == i)
			{
				if (j >= 4 && j <= 6)
				{
					cout << "*";
				}
				else
				{
					cout << " ";
				}
			}
			if (3 == i || 7 == i)
			{
				if (j >= 3 && j <= 7)
				{
					cout << "*";
				}
				else
				{
					cout << " ";
				}
			}
			if (4 == i || 6 == i)
			{
				if (j >= 2 && j <= 8)
				{
					cout << "*";
				}
				else
				{
					cout << " ";
				}
			}
			if (5 == i)
			{
				
				{
					cout << "*";
				}
			}
		}
		cout << endl;
	}
}