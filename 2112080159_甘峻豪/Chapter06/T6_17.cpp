/*
*FileName: T6_17.cpp
* Auther:  Junhao Gan
* E-mail:  32845288@qq.com
* Date:    Apr 9th, 2022
* College: School of Computer Science and Information Engineering
* Function:The use of rand(2).
*/
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	srand((unsigned)time(NULL));
	int a = 2 + rand() % 10;
	if (a % 2 == 0)
	{
		cout << a << endl;
	}
	else
	{
		cout << a-1 << endl;
	}
	int b = 3 + rand() % 10;
	if (b % 2 == 0)
	{
		cout << b-1 << endl;
	}
	else
	{
		cout << b << endl;
	}
	int c = 3 + rand() % 10;
	if (c % 2 == 0)
	{
		cout << 2*(c - 1) << endl;
	}
	else
	{
		cout <<2* c << endl;
	}
	return 0;
}