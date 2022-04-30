/*
*FileName: T5_24.cpp
* Auther:  Junhao Gan
* E-mail:  32845288@qq.com
* Date:    Mar 4th, 2022
* College: School of Computer Science and Information Engineering
* Function:
*/
#include <iostream>
using namespace std;
int main()
{
    int rows{ 0 };
    cout << "Enter an odd number of rows to display: 1-19:(-1 to quit) ";
    cin >> rows;
    while (rows != -1)
    {
        if (rows <= 19 && rows >= 1 && rows % 2 != 0)
        {
            for (int i{ 1 }, j{ 1 }, k{ rows / 2 }; i <= rows; ++i)
            {
                for (int s{ 0 }; s < k; ++s)
                {
                    cout << " ";
                }
                for (int d{ 0 }; d < j; ++d)
                {
                    cout << "*";
                }
                (i > rows / 2) ? j -= 2 : j += 2;
                (i > rows / 2) ? k++ : k--;
                cout << endl;
            }
        }
        else
        {
            cout << endl << "Incorrect odd number !!!" << endl;
        }
        cout << endl << "Enter an odd number of rows to display: 1-19:(-1 to quit) ";
        cin >> rows;
    }
    return 0;
}
