/*
*FileName: T2_27.cpp
* Auther:  Junhao Gan
* E-mail:  32845288@qq.com
* Date:    Mar 4th, 2022
* College: School of Computer Science and Information Engineering
* Function:Outputs the integer corresponding to the character typed on the keyboard.(ASCII)
*/
#include<iostream>
using namespace std;
int main()
{
	char ASCII;
	cin >> ASCII;
	cout << static_cast<int>(ASCII);
	system("pause");
	return 0;
}