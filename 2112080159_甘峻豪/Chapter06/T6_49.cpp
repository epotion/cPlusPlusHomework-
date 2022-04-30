/*
*FileName: T6_49.cpp
* Auther:  Junhao Gan
* E-mail:  32845288@qq.com
* Date:    Apr 9th, 2022
* College: School of Computer Science and Information Engineering
* Function:calculate circle Area.
*/
#include<iostream>
using namespace std;
inline double circleArea(double r);
const double pi = 3.14;
int main()
{
	double r = 0;
	cin >> r;
	cout << circleArea(r) << endl;
	return 0;
}
inline double circleArea(double r)
{
	return pi * r * r;
}