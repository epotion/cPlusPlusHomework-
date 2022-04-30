/*
*FileName: T6_20.cpp
* Auther:  Junhao Gan
* E-mail:  32845288@qq.com
* Date:    Apr 9th, 2022
* College: School of Computer Science and Information Engineering
* Function:multiple
*/
#include<iostream>
using namespace std;
bool multiple(int a, int b);
int main()
{
	int arr1[999],arr2[999];
	cout << "Input the two numbers(-1 to end): ";
	for (int i = 0; i < 999; i++)
	{
		cout << "Input the two numbers(-1 to end): ";
		cin >> arr1[i] >> arr2[i];
		if (-1 == arr2[i] || -1 == arr1[i])
		{
			cout << "game over!" << endl;
			break;
		}
		cout << "result: ";
		cout << multiple(arr1[i], arr2[i]) << endl;
	}

}
bool multiple(int a, int b)
{
	if (0 == b % a)
	{
		return true;
	}
	else
		return false;
}