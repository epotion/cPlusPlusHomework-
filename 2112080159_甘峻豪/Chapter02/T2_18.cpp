/*
*FileName: T2_18.cpp
* Auther:  Junhao Gan
* E-mail:  32845288@qq.com
* Date:    Mar 4th, 2022
* College: School of Computer Science and Information Engineering
* Function:he user enters two integers, takes the number entered by the user, and outputs the larger number, followed by "is large". If the two numbers are equal, the message "These numbers are equal" is printed.
*/
#include<iostream>
using namespace std;
int main()
{
	int a, b, m;
	cin >> a >> b;
	if (a > b)
	{
		m = a;
		cout <<m<< "is large" << endl;
	}
	if (b > a)
	{
		m = b;
		cout <<m<< "is large" << endl;
	}
	if (a == b)
	{
		cout << "These numbers are equal" << endl;
	}
	system("pause");
	return 0;
}