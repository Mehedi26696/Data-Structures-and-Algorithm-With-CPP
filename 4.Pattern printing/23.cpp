/*
1
A B
1 2 3
A B C D
1 2 3 4 5



*/
#include <iostream>
using namespace std;
int main()
{
    int r;
    cin >> r;
    for (int i = 1; i <= r; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << (char)(j + 64);
            }
        }
        else
        {
            for (int k = 1; k <= i; k++)
            {
                cout << k;
            }
        }
        cout << endl;
    }

    return 0;
}
