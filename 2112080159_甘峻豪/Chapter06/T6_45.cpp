/*
*FileName: T6_45.cpp
* Auther:  Junhao Gan
* E-mail:  32845288@qq.com
* Date:    Apr 9th, 2022
* College: School of Computer Science and Information Engineering
* Function:calculate multiple(fix cpp).
*/
#include<iostream>
using namespace std;
int mystery(int a, int b);
int main()
{
	int x = 0;
	int y = 0;
	cin >> x >> y;
	cout << "The result is " << mystery(x, y) << endl;
}
int mystery(int a, int b)
{
	return a*b;
}