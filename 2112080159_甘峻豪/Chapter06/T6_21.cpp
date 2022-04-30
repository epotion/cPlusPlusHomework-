/*
*FileName: T6_21.cpp
* Auther:  Junhao Gan
* E-mail:  32845288@qq.com
* Date:    Apr 9th, 2022
* College: School of Computer Science and Information Engineering
* Function:even.
*/
#include<iostream>
using namespace std;
bool even(int a);
int main()
{
	int a;
	for (int i = 0; i < 999; i++)
	{
		cout << "Input the number(-1 to end): ";
		cin >> a;
		if (-1 == a)
		{
			cout << "over" << endl;
			break;
		}
		cout << "result: ";
		cout << even(a) << endl;

	}
}
bool even(int a)
{
	if (0 == a % 2)
		return true;
	else
		return false;
}