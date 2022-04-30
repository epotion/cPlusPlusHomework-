/*
*FileName: T4_19.cpp
* Auther:  Junhao Gan
* E-mail:  32845288@qq.com
* Date:    Mar 8th, 2022
* College: School of Computer Science and Information Engineering
* Function: Just find to 2 bigger number in 10 numbers
*/
#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    for(int i = 0;i<10;i++)
    {
        cin >> arr[i];
    }//input 10 numbers.
    for(int i = 0;i<9;i++)
    {
        for(int j = 0;j<=9-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }//bubblesort to find the two biggest numbers.
    cout <<"the biggest numbers: "<< arr[8]<<" , "<<arr[9]<<endl;
    return 0;
}
