/*
*FileName:   T7_27.cpp
*Author:     甘峻豪
*E-mail:     32845288@qq.com
*Date:       2022.4.11
*College:    School of Computer Science and Information Engineering
*Function:   埃拉托笋丝筛选法，利用array对象打印2~999之间的质数。
*/
#include<iostream>
using namespace std;

void test(int arr[],int i)
{
	if (arr[i])
	{
		for (int j = 2*i; j < 1000; j += i)
		{
			arr[j] = 0;
		}
	}
}

int main()
{
	int arr[1000];
	for (int i = 0; i < 1000; ++i)
	{
		arr[i] = 1;
	}
	for (int i = 2; i < 1000; i++)
	{
		if (arr[i])test(arr, i);
	}
	cout << "2--999质数有:" << endl;
	for (int i = 2; i < 1000; i++)
	{
		if (arr[i])cout <<i<< "\n";
	}
	return 0;
}