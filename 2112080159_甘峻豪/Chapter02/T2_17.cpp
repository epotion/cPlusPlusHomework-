/*
*FileName: T2_17.cpp
* Auther:  Junhao Gan
* E-mail:  32845288@qq.com
* Date:    Mar 4th, 2022
* College: School of Computer Science and Information Engineering
* Function:Print the numbers 1 to 4 on the same line and separate each pair of adjacent numbers with a space.
*/
#include<iostream>
using namespace std;
int main()
{
	cout << "1 2 3 4\n";//Use a statement that contains a stream insert operator.
	cout << "1"<<" 2"<< " 3 4" << endl;//Use a statement that contains 4 stream insert operators.
	cout << "1";
	cout << " 2";
	cout << " 3";
	cout << " 4";//Use 4 statements that contains 4 stream insert operators.
	system("pause");
	return 0;
}