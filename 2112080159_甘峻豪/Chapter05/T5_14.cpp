/*
*FileName: T5_14.cpp
* Auther:  Junhao Gan
* E-mail:  32845288@qq.com
* Date:    Mar 4th, 2022
* College: School of Computer Science and Information Engineering
* Function:
*/
#include<iostream>
using namespace std;
int main()
{
	double sum = 0;
	int num = 1;
	int signal = 1;
	double pri = 0;
	cout << "Please input the signal of the thing(input 1 to 5,input 0 to end): ";
	cin >> signal;
	while (signal)
	{
		switch (signal)
		{
		case 1:
			pri = 2.98;
			break;
		case 2:
			pri = 4.50;
			break;
		case 3:
			pri = 9.98;
			break;
		case 4:
			pri = 4.49;
			break;
		case 5:
			pri = 6.87;
			break;
		default:
			break;
		}
		cout << "input the num of thing: ";
		cin >> num;
		sum += num * pri;
		cout << "Please input the signal of the thing(input 1 to 5,input 0 to end): ";
		cin >> signal;
	}
	cout << "the total sum of thing: ";
	cout << sum;
	return 0;
}