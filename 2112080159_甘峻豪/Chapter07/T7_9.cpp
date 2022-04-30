/*
*FileName: T7_9.cpp
* Auther:  Junhao Gan
* E-mail:  32845288@qq.com
* Date:    Apr 14th, 2022
* College: School of Computer Science and Information Engineering
* Function:array
*/
#include<iostream>
using namespace std;
array<int, 6>;
int main()
{
	int arr[2][3] = { (0,0,0),(0,0,0),(0,0,0) };
	/*for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			arr[i][j] = 0;
			cout << arr[i][j];;
		}
		cout << endl;
	}*///赋值为0
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> arr[i][j];
			
		}
		
	}//赋值
	/*for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (arr[i][j] < arr[i][j + 1])
			{
				arr[i][j + 1] = arr[i][j];
				
			}

		}

	}
	if (arr[0][2] < arr[1][2])
	{
		cout << arr[0][2] << endl;
	}
	else
	{
		cout << arr[1][2] << endl;
	}
	*///找最小值
	cout << arr[0][2] + arr[1][2] << endl;//求2列元素之和
	cout <<"\t" << 0 << "\t" << 1<<"\t" <<2<< endl;;
	for (int i = 0; i < 2; i++)
	{
		cout << i << "\t";
		for (int j = 0; j < 3; j++)
		{
			
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}//表格（带下标）
	return 0;
}