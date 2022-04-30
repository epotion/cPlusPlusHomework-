/*
*FileName: T6_42.cpp
* Auther:  Junhao Gan
* E-mail:  32845288@qq.com
* Date:    Apr 9th, 2022
* College: School of Computer Science and Information Engineering
* Function:calculate distance.
*/
#include<iostream>
#include<cmath>
using namespace std;
double distance(double a, double b,double c,double d);
int main()
{
	double x1, x2, y1, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	cout << distance(x1, y1, x2, y2) << endl;;
}
double distance(double a, double b, double c, double d)
{
	return sqrt((a - c) * (a - c) + (d - b) * (d - b));
}