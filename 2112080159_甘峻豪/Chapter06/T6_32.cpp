/*
*FileName: T6_32.cpp
* Auther:  Junhao Gan
* E-mail:  32845288@qq.com
* Date:    Apr 9th, 2022
* College: School of Computer Science and Information Engineering
* Function:qualityPoints
*/
#include<iostream>
using namespace std;
int qualityPoints(int a);
int main()
{
	int scores = 0;
	cin >> scores;
	cout << "Your qualityPoints: " << qualityPoints(scores) << endl;
}
int qualityPoints(int a)
{
	if (a >= 90 && a <= 100)
		return 4;
	else if (a >= 80 && a <= 89)
		return 3;
	else if (a >= 70 && a <= 79)
		return 2;
	else if (a >= 60 && a <= 69)
		return 1;
	else
		return 0;
}