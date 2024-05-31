/*
       *
      ***
     *****
    *******
    alternate

*/
#include <iostream>
using namespace std;
int main()
{
    int r;
    cin >> r;
    int stars = 1;
    int space = r - 1;
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        space--;
        for (int k = 1; k <= stars; k++)
        {
            cout << "*";
        }
        stars += 2;

        cout << endl;
    }

    return 0;
}