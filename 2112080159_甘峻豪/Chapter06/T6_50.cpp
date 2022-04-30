/*
*FileName: T6_50.cpp
* Auther:  Junhao Gan
* E-mail:  32845288@qq.com
* Date:    Apr 9th, 2022
* College: School of Computer Science and Information Engineering
* Function:Pass by value and pass by reference.
*/
#include<iostream>
using namespace std;
double tripleByValue(double x);
double tripleByReference(double& b);

int main()
{
	double a = 1;
	cin >> a;
	cout << tripleByValue(a)<<"a1="<<a << tripleByReference(a)<<"a2=" << a << endl;
}
double tripleByValue(double x)
{
	
	return 3*x;
}
double tripleByReference(double& b)
{
	
	return 3*b;
}