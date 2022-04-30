/*
*FileName: T4_36.cpp
* Auther:  Junhao Gan
* E-mail:  32845288@qq.com
* Date:    Mar 15th, 2022
* College: School of Computer Science and Information Engineering
* Function:decrypt
*/
#include<iostream>
using namespace std;
int main()
{
	int a, b, c, d, e, f, g, h, i, j;
	cout << "Enter a 4-digits number" << endl;
	cin >> a;
	b = a / 1000;//原对应第三位
	c = a / 100 % 10;//原对应第四位
	d = a / 10 % 10;//原对应第一位
	e = a % 10;//原对应第二位
	if (d == 0)
	{
		f = 3;
	}
	if (d >= 7 && d <= 9)
	{
		f = d - 7;
	}
	else
	{
		f = 10 + d - 7;
	}
	if (e == 0)
	{
		g = 3;
	}
	else if (e >= 7 && e <= 9)
	{
		g = e - 7;
	}
	else
	{
		g = 10 + e - 7;
	}
	if (b == 0)
	{
		h = 3;
	}
	else if (b >= 7 && b <= 9)
	{
		h = b - 7;
	}
	else
	{
		h = 10 + b - 7;
	}
	if (c == 0)
	{
		i = 3;
	}
	else if (c >= 7 && c <= 9)
	{
		i = c - 7;
	}
	else
	{
		i = 10 + c - 7;
	}

	cout << f << g << h << i;
	return 0;
}