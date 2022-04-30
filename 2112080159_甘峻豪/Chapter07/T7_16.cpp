/*
*FileName:   T7_16.cpp
**Author:     甘峻豪
*E-mail:     32845288@qq.com
*Date:       2022.4.11
*College:    School of Computer Science and Information Engineering
*Function:   掷双骰，统计掷36000次后各面和出现的个数。
*/
#include<iostream>
#include<cstdlib>
#include<ctime>

#include<array>
#include<Windows.h>
using namespace std;
int main()
{
	srand((unsigned)time(NULL));


	array<int, 13>arr = { 0 };
	array<int, 36000>arr1 = { 0 };

	array<int, 36000>arr2 = { 0 };
	for (int i = 0; i < 36000; i++)
	{

		arr1[i] = 1 + rand() % 6;
		//Sleep(1);
		arr2[i] = 1 + rand() % 6;
		for (int j = 2; j < 13; j++)
		{
			if (j == arr1[i] + arr2[i])
			{
				arr[j]++;
			}

		}

	}
	for (int i = 2; i <= 12; i++)
	{
		cout << i << ":" << arr[i] << endl;
	}
	//cout << x << endl;
	return 0;
}