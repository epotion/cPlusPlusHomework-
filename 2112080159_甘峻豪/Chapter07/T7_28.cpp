/*
*FileName:   T7_28.cpp
*Author:     ¸Ê¾þºÀ
*E-mail:     32845288@qq.com
*Date:       2022.4.11
*College:    School of Computer Science and Information Engineering
*Function:   »ØÎÄ¡£
*/
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

bool testPalindrome(string A)
{
	string B = A;
	reverse(A.begin(), A.end());
	if (B == A)return true;
	return false;
}

int main()
{
	string a;
	cin >> a;
	if (testPalindrome(a))cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}