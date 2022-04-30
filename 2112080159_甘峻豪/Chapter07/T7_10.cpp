/*
*FileName: T7_10.cpp
* Auther:  Junhao Gan
* E-mail:  32845288@qq.com
* Date:    Apr 14th, 2022
* College: School of Computer Science and Information Engineering
* Function:salesman's salary
*/
#include<iostream>
using namespace std;
int classify(int a);
int main()
{
	int s, pri;
	
	int counter[10] = { 0 };
	
	
	while (1)
	{
		cout << "销售额(输入-1退出)：" << endl;
		cin >> pri;
		if (-1 == pri)
		{
			break;
		}
		s = 200 + pri * 0.09;
		counter[classify(s)]++;
		
	}
	for (int i = 0; i < 9; i++)
	{
		cout <<"范围"<<i+1<<": " << counter[i] << endl;
	}
	return 0;
}
int classify(int a)
{
	if (a > 200 && a < 299)
	{
		return 0;
	}
	if (a > 300 && a < 399)
	{
		return 1;
	}
	if (a > 400 && a < 499)
	{
		return 2;
	}
	if (a > 500 && a < 599)
	{
		return 3;
	}
	if (a > 600 && a < 699)
	{
		return 4;
	}
	if (a > 700 && a < 799)
	{
		return 5;
	}
	if (a > 800 && a < 899)
	{
		return 6;

	}
	if (a > 900 && a < 999)
	{
		return 7;
	}
	if (a > 1000)
	{
		return 8;
	}

}