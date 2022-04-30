/*
*FileName: T2_26.cpp
* Auther:  Junhao Gan
* E-mail:  32845288@qq.com
* Date:    Mar 4th, 2022
* College: School of Computer Science and Information Engineering
* Function:Show checkerboard pattern
*/
#include<iostream>
using namespace std;
int main()
{
	for (int i = 1; i <= 16; i++)
	{
		for (int j = 1; j <= 16; j++)
		{
			if (i == 1 || i == 3||i==5 || i == 7)
			{
				if (j % 2 == 0)
				{
					cout << " ";
				}
				else
				{
					cout << "*";
				}
			}
			if (i == 2 || i == 4 || i == 6 || i == 8)
			{
				if (j % 2 == 0)
				{
					cout << "*";
				}
				else
				{
					cout << " ";
				}
			}
		}
		cout << endl;
	}
	system("pause");
	return 0;
}