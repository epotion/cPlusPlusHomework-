/*
*FileName: T5_11.cpp
* Auther:  Junhao Gan
* E-mail:  32845288@qq.com
* Date:    Mar 4th, 2022
* College: School of Computer Science and Information Engineering
* Function:
*/
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
	double amount;
	double principal=1000.0;
	double rate = 0.01;
	cout <<"rate"<<setw(21) << "year" << setw(21) << "Amount on deposit" << endl;
	cout << fixed << setprecision(2);
	for (int i = 5; i <= 10; ++i)
	{
		for (unsigned int year = 1; year <= 10; ++year)
		{
			amount = principal * pow(1.0 + i * rate, year);
			cout <<i<<"%" <<setw(21)<< year << setw(21) << amount << endl;
		}
	}

}