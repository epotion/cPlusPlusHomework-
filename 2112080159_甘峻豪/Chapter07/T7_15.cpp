/*
*FileName:   T7_15.cpp
**Author:     甘峻豪
*E-mail:     32845288@qq.com
*Date:       2022.4.11
*College:    School of Computer Science and Information Engineering
*Function:   遍历二维array对象
*/
#include<iostream>
#include<array>
using namespace std;

int main()
{
	array<array<int, 15>, 5>arr = {0};
	//array<int, 3>arr = { 0 };
	//array<int, arr[i]>arr2 = { 0 };
	cout << "   " << 0 << " " << 1 << " " << 2 << " " << 3 << " " << 4 << endl;;
	for (int i = 0; i < 3; i++)
	{
		cout << i << ": ";
		for (int j = 0; j < 5; j++)
		{
			cout << arr[i][j]<<" ";
		}
		cout << endl;
	}
	return 0;
}