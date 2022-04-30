/*
*FileName: T5_20.cpp
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
	for (int side1 = 3; side1 <= 500; ++side1)
	{
		for (int side2 = side1; side2 <= 500; ++side2)
		{
			for (int hypotenuse = side2; hypotenuse <= 500; ++hypotenuse)
			{
				if (hypotenuse*hypotenuse == side1 * side1 + side2 * side2)
				{
					cout << side1 << "," << side2 << "," << hypotenuse << endl;
				}
			}
		}
	}
	return 0;
}