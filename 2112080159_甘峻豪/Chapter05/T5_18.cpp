/*
*FileName: T5_18.cpp
* Auther:  Junhao Gan
* E-mail:  32845288@qq.com
* Date:    Mar 4th, 2022
* College: School of Computer Science and Information Engineering
* Function:
*/
#include<iostream>
#include<cmath>
#include<bitset>
using namespace std;
int main()
{
	for (int i = 1; i <= 256; ++i)
	{
		cout<<dec<<i<<"\t" << bitset<16>(i) << "\t" << oct << i << "\t" << hex << i << endl;
	}
	return 0;
}