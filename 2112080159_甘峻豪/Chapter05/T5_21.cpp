/*
*FileName: T5_21.cpp
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
	int select = 1;
	double m = 1;
	double hw1 = 1;
	double hw2 = 1;
	double cw = 1;
	double num = 1;
	double hour = 1;
	double ec = 1;
	double n = 1;
	double wages = 1;
	cout << "the salary of manager: ";
	cin >> m;
	cout << "hourly workers Fixed wages: ";
	cin >> hw1;
	cout << "how many hours: ";
	cin >> hour;
	cout << "commission work fixed wages: ";
	cin >> cw;
	cout << "how many the cw sell: ";
	cin >> num;
	cout << "how much money each one: ";
	cin >> ec;
	cout << "how many : ";
	cin >> n;
	cout << "input the sihnal of staff(1 to manager,2 to Hourly workers,3 to Commission work,4 to pieceworker,0 to endl): ";
	cin >> select;
	while (select)
	{
		switch (select)
		{
		case 1:
			wages = m;
			break;
		case 2:
			if (hour <= 40)
			{
				wages = hour * hw1;
			}
			else
			{
				wages = 40 * hw1 + (hour - 40) * 1.5 * hw1;
			}
			break;
		case 3:
			wages = 250 + num * 0.057;
			break;
		case 4:
			wages = ec * n;
			break;
		default:
			break;
        }
		cout << "your wages is: ";
		cout << wages << endl;
		cout << "input the sihnal of staff(1 to manager,2 to Hourly workers,3 to Commission work,4 to pieceworker,0 to endl): ";
		cin >> select;
	}
	return 0;
}