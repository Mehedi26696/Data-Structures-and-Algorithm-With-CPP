/*
   *
  **
 ***
****
 ***
  **
   *


input rows=4;


*/

#include <iostream>
using namespace std;
int main()
{
    int r;
    cin >> r;
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= r - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int m = 1; m < r; m++)
    {
        for (int n = 1; n <= m; n++)
        {
            cout << " ";
        }
        for (int o = 1; o <= (r - m); o++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}