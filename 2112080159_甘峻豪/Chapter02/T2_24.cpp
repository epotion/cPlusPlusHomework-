/*
*FileName: T2_24.cpp
* Auther:  Junhao Gan
* E-mail:  32845288@qq.com
* Date:    Mar 4th, 2022
* College: School of Computer Science and Information Engineering
* Function:Read in an integer, then determine and print whether it is odd or even.
*/
#include<iostream>
using namespace std;
int main()
{
	int a;
	cin >> a;
	if (a % 2 == 0)
	{
		cout << "even" << endl;
	}
	else
	{
		cout << "odd" << endl;
	}
	system("pause");
	return 0;
}