/*
*FileName: T2_23.cpp
* Auther:  Junhao Gan
* E-mail:  32845288@qq.com
* Date:    Mar 4th, 2022
* College: School of Computer Science and Information Engineering
* Function:Read five numbers and print the maximum and minimum of them.
*/
#include<iostream>
using namespace std;
void max(int a, int b, int c, int d, int e)//maximum
{
	int ma, ma1,ma2;
	if (a > b)
	{
		if (a > c)
		{
			ma1 = a;
		}
		if (a < c)
		{
			ma1 = c;
		}
	}
	if (a < b)
	{
		if (b > c)
		{
			ma1 = b;
		}
		if (b < c)
		{
			ma1 = c;
		}
	}
	if (d > e)
	{
		ma2 = d;
	}
	if (d < e)
	{
		ma2 = e;

	}
	if (ma2 > ma1)
	{
		ma = ma2;
	}
	if(ma2<ma1)
	{
		ma = ma1;
	}
	cout << ma << endl;
}
void min(int f, int g, int h, int i, int j)//minimum
{
	int mi,mi1,mi2;
	if (f < g)
	{
		if (f< h)
		{
			mi1 = f;
		}
		if (f > h)
		{
			mi1 = h;
		}
	}
	if (g < f)
	{
		if ( g<h)
		{
			mi1 = g;
		}
		if (h<g)
		{
			mi1 = h;
		}
	}
	if (i<j)
	{
		mi2 = i;
	}
	if (j<i)
	{
		mi2 = j;

	}
	if (mi1<mi2)
	{
		mi = mi1;
	}
	if (mi2 < mi1)
	{
		mi = mi2;
	}
	cout << mi << endl;
}
int main()
{
	int n_A, n_B, n_C, n_D, n_E;
	cin>>n_A>> n_B>>n_C>>n_D>>n_E;
	max(n_A, n_B, n_C, n_D, n_E);
	min(n_A, n_B, n_C, n_D, n_E);
    system("pause");
	return 0;
}