/*
*
* *
* * *
* * * *
* * *
* *
*

input row=4
*/
#include <iostream>
using namespace std;
int main()
{
    int r;
    cin >> r;
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int k = 1; k < r; k++)
    {
        for (int m = 1; m < r + 1 - k; m++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}