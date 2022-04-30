/*
* FileName: T2_16.cpp
* Auther:  Junhao Gan
* E-mail:  32845288@qq.com
* Date:    Mar 4th, 2022
* College: School of Computer Science and Information Engineering
* Function:The user inputs two numbers, and gets the number entered by the user, and outputs the sum, product, difference, and quotient of the two numbers.
*/
#include<iostream>
using namespace std;
void Calculate(double a,double b)
{
	
    cout <<"两数之和："<< a + b << endl;
	cout <<"两数之积："<< a * b << endl;
	cout <<"两数之差："<< a - b << endl;
	cout <<"两数之商："<< a / b << endl;
}
int main()
{
	double n_A;
	double n_B;
	cin >> n_A;
	cin >> n_B;
	Calculate(n_A, n_B);
	system("pause");
	return 0;
}