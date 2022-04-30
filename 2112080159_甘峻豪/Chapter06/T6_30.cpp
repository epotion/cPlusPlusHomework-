/*
*FileName: T6_30.cpp
* Auther:  Junhao Gan
* E-mail:  32845288@qq.com
* Date:    Apr 9th, 2022
* College: School of Computer Science and Information Engineering
* Function:Digital reverse
*/
#include<iostream>
using namespace std;
int daoxu(int a);
int main()
{
	int	num = 0;
	cin >> num;
	cout << daoxu(num);
	return 0;
}
int daoxu(int a)
{
	int x = 0;
	while (a)
	{

		x = x * 10 + a % 10;
		a = a / 10;
	}
	return x;
}