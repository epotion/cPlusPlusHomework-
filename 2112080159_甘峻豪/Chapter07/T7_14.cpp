/*
*FileName:   T7_14.cpp
*Author:     甘峻豪
*E-mail:     32845288@qq.com
*Date:       2022.4.11
*College:    School of Computer Science and Information Engineering
*Function:   利用vector对象去重。
*/
#include<iostream>
#include<array>
using namespace std;
int main()
{

	array<int, 20>arr2;
	vector<int>v1(20);
	int num, n = 20, m = 0, a = 0;
	int p = 0;
	int z;
	while (m < 20)
	{
		cin >> num;
		m++;
		if (num >= 10 && num <= 100)
		{
			p++;
			arr2[p] = num;

			v1[a++] = arr2[p];


			for (int i = 1; i < p; i++)
			{

				if (arr2[p] == arr2[i])
				{
					p--;
					n--;

				}


			}




		}
		else n--;

	}
	for (int i = 0; i < n; i++)
	{
		cout << v1[i] << " ";
	}
	return 0;
}