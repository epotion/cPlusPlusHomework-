/*
*FileName: T6_33.cpp
* Auther:  Junhao Gan
* E-mail:  32845288@qq.com
* Date:    Apr 9th, 2022
* College: School of Computer Science and Information Engineering
* Function:flib
*/
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
bool flib();
int main()
{
	int arr[2] = { 0 };
	srand((unsigned)time(NULL));
	for (int i = 1; i <= 100; i++)
	{
		
		if (0 == flib())
		{
			cout << "Tail" << endl; 
			arr[1]++;
			
		}
		else
		{
			cout << "Head" << endl;
			arr[0]++;
		}
		
	}
	cout << "The totals of Tail: " << arr[1] << endl;
	cout << "The totals of Head: " << arr[0] << endl;
	return 0;
}
bool flib()
{
	
	int x =0+ rand() % 2;
	if (0 == x)
		return 0;
	else
		return 1;
}