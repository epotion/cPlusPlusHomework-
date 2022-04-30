/*
*FileName: T5_25.cpp
* Auther:  Junhao Gan
* E-mail:  32845288@qq.com
* Date:    Mar 4th, 2022
* College: School of Computer Science and Information Engineering
* Function:
*/
#include<iostream>
using namespace std;
int main()
{
	unsigned int count;
	for (count = 1; count <= 10; ++count)
	{
		cout << count << " ";
		if (count == 4)
		{
			count = 11;
		}
	}
	return 0;
}