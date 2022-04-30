#include<iostream>
#include<cmath>
using namespace std;
/*
*FileName: T5_32.cpp
* Auther:  Junhao Gan
* E-mail:  32845288@qq.com
* Date:    Mar 4th, 2022
* College: School of Computer Science and Information Engineering
* Function:
*/
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double population = 10;
	int c = 1;
	for (int i = 2; i <= 5; i++)
	{
		population = 10;
		while (1)
		{
			
			if (population > 25)
			{
				break;
			}
			population*= (1 + 0.01 * i);
			c++;
			
		}
		cout <<i<<"%"<< ": " << c << endl;
	
	}
	
	return 0;
}

