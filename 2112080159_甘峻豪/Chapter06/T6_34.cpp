/*
*FileName: T6_34.cpp
* Auther:  Junhao Gan
* E-mail:  32845288@qq.com
* Date:    Apr 9th, 2022
* College: School of Computer Science and Information Engineering
* Function:guess number.
*/
#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
	int num,choise;
	srand((unsigned)time(NULL));
	int x = 1 + rand() % 1000;
	cout << "I have a number between 1 and 1000" << endl;
	cout << "Can you guess my number?" << endl;
	cout << "Please type your first guess." << endl;
	cin >> num;
	while (1)
	{
		if (num > x)
		{
			cout << "Too high.Try again" << endl;
			
			
		}
		else if (num < x)
		{
			cout << "Too low.Try again" << endl;
			
		}
		else
		{
			cout << "Excellent! You guessed the number!" << endl;
			cout << "Would you like to play again(y or n)?";
			cin >> choise;
			if (0 == choise)
			{
				break;
			}
			else
			{
				x = 1 + rand() % 1000;
			}
			
		}
		cout << "Please type your guess." << endl;
		cin >> num;
	}
}