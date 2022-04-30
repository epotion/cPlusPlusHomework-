/*
*FileName: T6_23.cpp
* Auther:  Junhao Gan
* E-mail:  32845288@qq.com
* Date:    Apr 9th, 2022
* College: School of Computer Science and Information Engineering
* Function:Star figure.
*/
#include<iostream>
using namespace std;
void side(int a);
void fillCharacter();
int main()
{
	int x = 0;

	for (int i = 1; i < 9999; ++i)
	{
		cout << "Input the number(-1 to end): ";
		cin >> x;
		if (-1 == x)
		{
			cout << "over" << endl;
			break;
		}
		side(x);
	}
}
void side(int a)
{
	for (int i = 1; i <= a; ++i)
	{
		for (int j = 1; j <= a; ++j)
		{
			fillCharacter();
		}
		cout << endl;
	}

}
void fillCharacter()
{
	cout << "#";
}