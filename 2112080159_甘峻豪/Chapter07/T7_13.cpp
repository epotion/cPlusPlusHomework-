/*
*FileName: T7_13.cpp
* Auther:  Junhao Gan
* E-mail:  32845288@qq.com
* Date:    Apr 14th, 2022
* College: School of Computer Science and Information Engineering
* Function:salesman's salary
*/
#include<iostream>
#include<array>
using namespace std;
int main()
{
	
	array<int, 20>arr2;
	int num, n = 20,m = 0;
	int p = 0;
	int z;
	while (m<20)
	{
		cin >> num;
		m++;
		if (num >= 10 && num <= 100)
		{
			p++;
			arr2[p] = num;
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
	for(int i=1;i<=n;i++)
	{
		cout << arr2[i] << " ";
	}
	return 0;
}
