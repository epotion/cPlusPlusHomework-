/*
*FileName: T5_22.cpp
* Auther:  Junhao Gan
* E-mail:  32845288@qq.com
* Date:    Mar 4th, 2022
* College: School of Computer Science and Information Engineering
* Function:
*/
#include<iostream>
using namespace std;
//依次输入符合x<5||y>=7,a==b&&g!=5,x<=8||y<=4,i>4&&i>6的值，若输出为1，则新表达式与旧表达式等效。
int main()
{
	int x, y,a,b,g,i,j;
	cin >> x >> y;
	if (!(x < 5) && !(y >= 7))
	{
		cout << 1 << endl;;
	}
	else
	{
		cout << 0 << endl;
	}
	cin >> a >> b>>g;
	if (!(a==b) && !(g!=5))
	{
		cout << 1 << endl;;
	}
	else
	{
		cout << 0 << endl;
	}
	cin >> x >> y;
	if (!(x<=8) && y>4)
	{
		cout << 1 << endl;;
	}
	else
	{
		cout << 0 << endl;
	}
	cin >> i >> j;
	if (!(i>4) && j<= 6)
	{
		cout << 1 << endl;;
	}
	else
	{
		cout << 0 << endl;
	}
	cin >> i >> j;
	return 0;
}