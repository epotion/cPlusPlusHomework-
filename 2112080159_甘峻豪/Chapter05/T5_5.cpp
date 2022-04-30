/*
*FileName: T5_5.cpp
* Auther:  Junhao Gan
* E-mail:  32845288@qq.com
* Date:    Mar 4th, 2022
* College: School of Computer Science and Information Engineering
* Function:
*/
#include<iostream>
using namespace std;
int main()
{
	int c = 1;
	int n, n1 = 0;
	cin >> c;
	for (int i = 1; i <= c; ++i)
	{
		cin >> n;
		n += n1;
		n1 = n;
	}
	cout << n;
	return 0;
}