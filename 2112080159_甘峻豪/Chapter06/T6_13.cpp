/*
*FileName: T6_13.cpp
* Auther:  Junhao Gan
* E-mail:  32845288@qq.com
* Date:    Apr 8th, 2022
* College: School of Computer Science and Information Engineering
* Function:The integer rounding of the number.
*/
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double arr1[9998] = {0};
	int floor1(double a);
	for (int i = 1; i <= 9999; ++i)
	{
		cin >> arr1[i];
		cout << floor1(arr1[i]) << endl;
    }
	return 0;
}
int floor1(double a)
{
	int y = floor(a + 0.5);
	return y;
}