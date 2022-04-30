/*
*FileName: T5_6.cpp
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
	int n = 0;
	int n1 = 0;
	int average = 0;
	for (int c = 1; true; ++c)
	{
		cin >> n;
		if (9999 == n)
		{
			break;
		}
		n += n1;
		average = n / c;
		n1 = n;
	}
	cout << average;
	return 0;
}