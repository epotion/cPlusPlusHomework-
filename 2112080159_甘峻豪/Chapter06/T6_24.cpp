/*
*FileName: T6_24.cpp
* Auther:  Junhao Gan
* E-mail:  32845288@qq.com
* Date:    Mar 4th, 2022
* College: School of Computer Science and Information Engineering
* Function:The digital separation.
*/
#include<iostream>
using namespace std;
int weishu(int a);
int chufa(int b);

int main()
{
	int x, z,m;
	cin >> x;
	z = weishu(x);
	while (z)
	{
		m = x / chufa(z - 1);
		x = x % chufa(z - 1);
		cout << m <<" ";
		z--;
	}
	return 0;
}
int weishu(int a)
{
	int num = 0;
	while (a)
	{
		a /= 10;
		num++;
	}
	return num;
}
int chufa(int b)
{
	int g = 1;
	for (int i = 1; i <= b; i++)
	{
		g *= 10;
	}
	return g;
}
