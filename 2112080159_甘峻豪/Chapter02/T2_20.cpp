/*
*FileName: T2_20.cpp
* Auther:  Junhao Gan
* E-mail:  32845288@qq.com
* Date:    Mar 4th, 2022
* College: School of Computer Science and Information Engineering
* Function:The radius of the input circle, the diameter, circumference, and area of the output circle
*/
#include<iostream>
using namespace std;
const double pi = 3.14159;
class circle
{
public:
	int m_r;
	double diameter()//diameter
	{
		return 2 * m_r;
	}
	double calculatepm()//circumference
	{
		return 2 * pi * m_r;
	}
	double calculateps()// area
	{
		return pi * m_r*m_r;
	}
};
int main()
{
	circle c1;
	cin>>c1.m_r ;
	cout << c1.diameter() << endl;//diameter
	cout << c1.calculatepm() << endl;//circumference
	cout << c1.calculateps() << endl;// area
	system("pause");
	return 0;
}