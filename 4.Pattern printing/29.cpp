/*
      1
    2 1
  3 2 1
4 3 2 1


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

        int a = i;
        for (int k = 1; k <= i; k++)
        {
            cout << a;
            a--;
        }
        cout << endl;
    }

    return 0;
}