/*
*FileName: T2_19.cpp
* Auther:  Junhao Gan
* E-mail:  32845288@qq.com
* Date:    Mar 4th, 2022
* College: School of Computer Science and Information Engineering
* Function:Take three numbers, output their sum, average, product, minimum, maximum.
*/
#include<iostream>
using namespace std;
int main()
{
	int a, b, c, n_A, n_P, n_Mi, n_Ma;
    cin >> a >> b >> c;
	cout << "Input three different integers: " <<a<<" "<<b<<" "<<c << endl;
	cout << "Sum is " << a + b + c << endl;
	n_A = (a + b + c) / 3;
	cout << "Average is " << n_A << endl;
	n_P = a * b * c;
	cout << "Product is " << n_P << endl;
	if (a < b)
	{
		if (a < c)
		{
			n_Mi = a;
		}
		if (a > c)
		{
			n_Mi = c;
		}
	}
	if (b < a)
	{
		if (b < c)
		{
			n_Mi = b;
		}
		if (b > c)
		{
			n_Mi = c;
		}
	}//smallest
	if (a > b)
	{
		if (a > c)
		{
			n_Ma = a;
		}
		if (a < c)
		{
			n_Ma = c;
		}
	}
	if (b > a)
	{
		if (b > c)
		{
			n_Ma = b;
		}
		if (b < c)
		{
			n_Ma = c;
		}
	}//largest
	cout << "Smallest is " << n_Mi << endl;
	cout << "Largest is " << n_Ma << endl;
	system("pause");
	return 0;
}