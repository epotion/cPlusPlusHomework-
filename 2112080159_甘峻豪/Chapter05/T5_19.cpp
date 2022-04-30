/*
*FileName: T5_19.cpp
* Auther:  Junhao Gan
* E-mail:  32845288@qq.com
* Date:    Mar 4th, 2022
* College: School of Computer Science and Information Engineering
* Function:
*/
#include<iostream>
using namespace std;
#include<cmath>
int main()
{
	double sum = 0;
	double temp = 0;
	int num = 0;
	int b = 1;
	for (int i = 1; i <=1000; ++i)
	{
		
		sum =sum+ (pow(-1, i+1) * 4 / b);
		b = b + 2;
		cout <<i<<"\t" << sum << endl;
	}

	return 0;
}