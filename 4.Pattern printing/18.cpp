/*
1
0 1
1 0 1
0 1 0 1

//alternate approach
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
            if ((i == j) || ((i + j) % 2 == 0))
            {
                cout << 1;
            }
            else
            {
                cout << 0;
            }
        }
        cout << endl;
    }

    return 0;
}