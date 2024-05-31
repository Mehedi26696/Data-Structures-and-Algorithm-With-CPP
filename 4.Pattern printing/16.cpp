/*
 1
 0 0
 1 1 1
 1 1 1 1

 row odd start 1
 row even start 0


 */
#include <iostream>
using namespace std;
int main()
{
    int r;
    cin >> r;
    int a;
    for (int i = 1; i <= r; i++)

    {
        if (i % 2 == 0)
        {
            a = 0;
        }
        else
        {
            a = 1;
        }

        for (int j = 1; j <= i; j++)
        {
            cout << a;
        }
        cout << endl;
    }

    return 0;
}