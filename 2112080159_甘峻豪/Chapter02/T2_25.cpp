/*
*FileName: T2_25.cpp
* Auther:  Junhao Gan
* E-mail:  32845288@qq.com
* Date:    Mar 4th, 2022
* College: School of Computer Science and Information Engineering
* Function:Take two numbers, identify and print the first and multiples of the second.
*/
#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	if (a % b == 0)
	{
		cout << "yes" << endl;
	}
	else
	{
		cout << "no" << endl;
	}
	system("pause");
	return 0;
}