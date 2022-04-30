/*
*FileName: T6_16.cpp
* Auther:  Junhao Gan
* E-mail:  32845288@qq.com
* Date:    Apr 9th, 2022
* College: School of Computer Science and Information Engineering
* Function:The use of rand or srand.
*/
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	srand((unsigned)time(NULL));
	int a = 1 + rand() % 2;
	int b = 1 + rand() % 100;
	int c = rand() % 10;
	int d = 1000 + rand() % 113;
	int e = -1 + rand() % 3;
	int f = -3 + rand() % 15;
	cout << a <<" " << b << " " << c <<" " << d <<" " << e <<" " << f << endl;
	return 0;
}