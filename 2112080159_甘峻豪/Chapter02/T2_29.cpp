/*
*FileName: T2_29.cpp
* Auther:  Junhao Gan
* E-mail:  32845288@qq.com
* Date:    Mar 4th, 2022
* College: School of Computer Science and Information Engineering
* Function:Compute the sum of squares and cubes of the integers 0 to 10, then output the table of values using tabs.
*/
#include<iostream>
using namespace std;
int main()
{ 
	cout << "integer" << "\t" << "square" << "\t" << "cube" << endl;
    for (int i = 1; i <= 10; i++)
	   {
			
			cout << i << "\t" << i * i << "\t" << i * i * i << endl;
			
		}
	system("pause");
	return 0;
}