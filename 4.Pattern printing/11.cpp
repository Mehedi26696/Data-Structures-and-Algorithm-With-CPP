/*
     *
     *
 * * * * * *
     *
     *

*/
#include <iostream>
using namespace std;
int main()
{
    int r;
    //input always odd
    cin >> r;
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= r; j++)

        {

            if ((i == (1 + r / 2)) || (j == (1 + r / 2)))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
            
        }
        cout << endl;
    }

    return 0;
}