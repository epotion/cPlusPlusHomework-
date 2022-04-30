/*
*FileName: T6_29.cpp
* Auther:  Junhao Gan
* E-mail:  32845288@qq.com
* Date:    Apr 9th, 2022
* College: School of Computer Science and Information Engineering
* Function:prime
*/
#include<iostream>
using namespace std;
bool prime(int a);
int main()
{
	int arr[9999] ;
	for (int i =2; i <=10000; i++)
	{
		if (1 == prime(i))
		{
			cout << i << endl;
		}
		
	}
	
}
bool prime(int a)
{
	for (int i = 2; i < a; i++)
	{
		if (0 == a % i)
		{
			return 0;
			break;
		}
		
	}
	return 1;
}