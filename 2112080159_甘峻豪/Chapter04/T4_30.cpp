/*
*FileName: T4_30.cpp
* Auther:  Junhao Gan
* E-mail:  32845288@qq.com
* Date:    Mar 8th, 2022
* College: School of Computer Science and Information Engineering
* Function: Calculate the diameter, circumference and area of a circle.
*/
#include<iostream>
using namespace std;
int main()
{
    const double pai = 3.14159
    double r;
    cin >> r;
    cout << "diameter:  " << 2*r << endl;
    cout << "circumference:  "<<2*pai*r <<endl;
    cout << "area: "<<pai*r*r <<endl;
    return 0;
}
