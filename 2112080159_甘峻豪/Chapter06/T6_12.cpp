/*
*FileName: T6_12.cpp
* Auther:  Junhao Gan
* E-mail:  32845288@qq.com
* Date:    Apr 8th, 2022
* College: School of Computer Science and Information Engineering
* Function:stopping price
*/
#include<iostream>
#include<iomanip>
using namespace std;
double calculateCharges(double a);
int main()
{
	int car[3] = { 0 };
	double hours[3] = { 0 };
	for (int i = 0; i < 3; ++i)
	{
		cout << "input the car numbers,and the hours of the car stopping: ";
		cin >> car[i];
		cin >> hours[i];
	}
	cout << "Car" << "\t" << "Hours" << "\t" << "Charge" << endl;
	for (int i = 0; i < 3; ++i)
	{
		cout << car[i] << "\t" <<fixed<<setprecision(1)<< hours[i] << "\t" << fixed<< setprecision(2)<<calculateCharges(hours[i]) << endl;
	}
	return 0;
}
double calculateCharges(double a)
{
	double price = 0;
	if (a <= 3)
	{
		price = 2;
	}
	if (a > 3 && a < 16)
	{
		price = 2 + (a - 3) * 0.5;
	}
	if (a >= 16)
	{
		price = 10;
	}
	return price;
}