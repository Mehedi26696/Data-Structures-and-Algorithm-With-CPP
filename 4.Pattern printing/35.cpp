/*
*******
*** ***
**   **
*     *



input rows=4

*/
#include <iostream>
using namespace std;
int main()
{
    int r;
    cin >> r;
    for (int i = 1; i <= 2 * r - 1; i++)
    {
        cout << "*";
    }
    r = r - 1;
    cout << endl;
    for (int m = 1; m <= r; m++)
    {
        for (int j = 1; j <= r + 1 - m; j++)
        {
            cout << "*";
        }
        for (int k = 1; k <= 2 *m-1; k++)
        {
            cout<<" ";
        }
        for (int j = 1; j <= r + 1 - m; j++)
        {
            cout << "*";
        }
        cout<<endl;
    }

    return 0;
}