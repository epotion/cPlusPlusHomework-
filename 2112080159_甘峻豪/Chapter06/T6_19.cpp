/*
*FileName: T6_19.cpp
* Auther:  Junhao Gan
* E-mail:  32845288@qq.com
* Date:    Mar 4th, 2022
* College: School of Computer Science and Information Engineering
* Function:hypotenuse.
*/
#include<iostream>
#include<cmath>
using namespace std;
double hypotenuse(double a, double b);
int main()
{
	int arr[3], brr[3], crr[3];
	for (int i = 0; i < 3; ++i)
	{
		cin >> arr[i] >> brr[i] >> crr[i];
		cout << hypotenuse(brr[i], crr[i]) << endl;;
	}
}
double hypotenuse(double a, double b)
{
	double c = sqrt(a * a + b * b);
	return c;
}