#include<iostream>
using namespace std;
int main()
{
	for (unsigned int count = 1; count <= 10; ++count)
	{
		if (count == 5)
		{
			count = 6;
		}
		cout << count << " ";
	}
	return 0;
}