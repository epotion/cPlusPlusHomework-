/*
*FileName:   T2_31.cpp
* Auther:  Junhao Gan
* E-mail:  32845288@qq.com
* Date:    Mar 4th, 2022
*College:    School of Computer Science and Information Engineering
*Function:   ���û���ʾÿ�տ����ķ��á�
*/
#include<iostream>
using namespace std;
int main()
{
	double a, b, c, d, e;
	cout << "��������쿪��Ӣ������ ";
	cin >> a;
	cout << "������ÿ�������͵ļ۸� ";
	cin >> b;
	cout << "������ÿ�������Ϳ��Կ���ƽ��Ӣ������ ";
	cin >> c;
	cout << "��������յ�ͣ���ѣ� ";
	cin >> d;
	cout << "��������յ�ͨ�зѣ� ";
	cin >> e;
	cout << "�����ó�����Ϊ�� " << a / c * b + c + d << endl;
	return 0;
}