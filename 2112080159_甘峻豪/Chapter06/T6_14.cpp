/*
*FileName: T6_14.cpp
* Auther:  Junhao Gan
* E-mail:  32845288@qq.com
* Date:    Apr 8th, 2022
* College: School of Computer Science and Information Engineering
* Function:round to
*/
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
double roundToInteger(double a);
double roundToTenth(double b);
double roundToHundredths(double c);
double roundToThousandths(double d);
int main()
{
	double arr[999], n = 0, z,x;
	int m;

	for (int i = 0; i < 999; ++i)
	{
		cin >> arr[i];
		/*z = arr[i];
		m = arr[i];
		while (z>m) {
			z = z * 10;
			m = z;
			n++;
		}
		*/
		x = arr[i];
		
		cout << "TheOriginalNumber: " << arr[i] << endl;
		cout << "roundToInteger: " << roundToInteger(arr[i]) << endl;
		cout<< "roundToTenth: " << roundToTenth(arr[i]) << endl;
		cout << "roundToHundredths: " << roundToHundredths(arr[i]) << endl;
		cout<< "roundToThousandths: " << roundToThousandths(arr[i]) << endl;
	}
	/* cin >> a;
	 cout << a;*/
	return 0;
}
double roundToInteger(double a)
{
	double x = floor(a + 0.5);
	return x;
}
double roundToTenth(double b)
{
	double y = floor(b * 10 + 0.5) / 10;
	return y;
}
double roundToHundredths(double c)
{
	double z = floor(c * 100 + 0.5) / 100;
	return z;
}
double roundToThousandths(double d)
{
	double u = floor(d * 1000 + 0.5) / 1000;
	return u;
}
