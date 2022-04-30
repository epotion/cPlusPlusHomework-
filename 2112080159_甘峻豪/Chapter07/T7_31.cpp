/*
*FileName:   T7_31.cpp
*Author:     ¸Ê¾þºÀ
*E-mail:     32845288@qq.com
*Date:       2022.4.11
*College:    School of Computer Science and Information Engineering
*Function:   ÄæÐò´òÓ¡×Ö·û´®¡£
*/
#include<iostream>
using namespace std;

void stringReverse(string a,int len)
{
	cout << a[len - 1];
	if (0 == len - 1)return;
	return stringReverse(a, len - 1);
}

int main()
{
	string A = "abcdef";
	int len = 6;
	stringReverse(A, len);
	return 0;
}