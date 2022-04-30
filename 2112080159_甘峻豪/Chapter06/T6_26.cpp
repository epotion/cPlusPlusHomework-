/*
*FileName: T6_26.cpp
* Auther:  Junhao Gan
* E-mail:  32845288@qq.com
* Date:    Apr 9th, 2022
* College: School of Computer Science and Information Engineering
* Function:celsius to fahrenheit.
*/
#include<iostream>
#include<iomanip>
using namespace std;
double celsius(int a);
double fahrenheit(int b);
int main()
{
	cout << "celsius" << "\t" << "fahrenheit" << endl;
	for (int i = 1; i <= 100; ++i)
	{
		cout << i <<"\t" <<fixed<<setprecision(2)<< fahrenheit(i) << endl;
	}
	cout << "fahrenheit" << "\t" << "celsius" << endl;
	for (int i = 32; i <= 212; ++i)
	{
		cout << i << "\t\t" << fixed << setprecision(2)<< celsius(i) << endl;
	}
	return 0;
}
double celsius(int a)
{
	return (a - 32) / 1.8;
}double fahrenheit(int b)
{
	return b * 1.8 + 32;
}