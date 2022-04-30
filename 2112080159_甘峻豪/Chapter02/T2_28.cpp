/*
*FileName: T2_28.cpp
* Auther:  Junhao Gan
* E-mail:  32845288@qq.com
* Date:    Mar 4th, 2022
* College: School of Computer Science and Information Engineering
* Function:Enter a five-digit integer and factor out its bits.
*/
#include<iostream>
using namespace std;
int main()
{
	int a;
	cin >> a;
	cout << a / 10000 << " " << a / 1000 % 10 << " " << a / 100 % 10 << " " << a / 10 % 10 << " " << a % 10 << endl;
	system("pause");
	return 0;
}