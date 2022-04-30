/*
*FileName: T2_21.cpp
* Auther:  Junhao Gan
* E-mail:  32845288@qq.com
* Date:    Mar 4th, 2022
* College: School of Computer Science and Information Engineering
* Function:Output graphics
*/
#include<iostream>
using namespace std;
int main()
{
	
	for (int i = 1; i <= 9; i++)
	{
	 
		for (int j = 1; j <= 9; j++)
		{
			if (i > 1 && i < 9)
			{
				if (j > 1 && j < 9)
				{
					cout << " ";
				}
				else
				{
					cout << "*";
				}
			}
			else
				cout << "*";
		}
		cout << endl;
	}
	for (int a = 1; a <= 9; a++)
	{

		for (int b = 1; b <= 9; b++)
		{
			if (a > 2 && a < 8)
			{
				if (b > 1 && b < 9)
				{
					cout << " ";
				}
				else
				{
					cout << "*";
				}
			}
			if (a == 2 || a == 8)
			{
				if (b == 2 || b == 8)
				{
					cout << "*";
				}
				else
				{
					cout << " ";
				}
			}
			if (a == 1 || a == 9)
			{
				if (b > 3 && b < 7)
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
	for (int c = 1; c <= 9; c++)
	{
		for (int d = 1; d <= 5; d++)
		{
			if (c > 3 && c <= 9)
			{
				if (d == 3)
				{
					cout << "*";
				}
				else
				{
					cout << " ";
				}
			}
			if(c==1)
			{
				if (d == 3)
				{
					cout << "*";
				}
				else
				{
					cout << " ";
				}
			}
			if (c == 2)
			{
				if (d > 1 && d < 5)
				{
					cout << "*";
				}
				else
				{
					cout << " ";
				}
			}
			if(c==3)
			{
				cout << "*";
			}
		}
		cout << endl;
	}
	for (int e = 1; e <= 9; e++)
	{
		for (int f = 1; f <= 9; f++)
		{
			if (e == 1 || e == 9)
			{
				if (f == 5)
				{
					cout << "*";
				}
				else
				{
					cout << " ";
				}
			}
			if (e == 2 || e == 8)
			{
				if (f == 4 || f == 6)
				{
					cout << "*";
				}
				else
					cout << " ";
			}
			if (e == 3 || e == 7)
			{
				if (f == 3 || f == 7)
				{
					cout << "*";
				}
				else
				{
					cout << " ";
				}
			}
			if (e == 4 || e == 6)
			{
				if (f == 2 || f == 8)
				{
					cout << "*";
                }
				else
				{
					cout << " ";
				}
			}
			if(e==5)
			{
				if (f > 1 && f < 9)
				{
					cout << " ";
				}
				else
				{
					cout << "*";
				}
			}
		}
		cout << endl;
	}

	system("pause");
	return 0;
}