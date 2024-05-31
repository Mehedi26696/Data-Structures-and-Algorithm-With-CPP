/*
* # # # *
# * # * #
# # * # #
# * # * #
* # # # *

*/
#include <iostream>
using namespace std;
int main()
{
    int r;
    //input odd
    cin >> r;
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= r; j++)
        {
            if ((i == j) || (i + j == r + 1))
            {
                cout << "*";
            }
            else
            {
                cout << "#";
            }
        }
        cout<<endl;
    }

    return 0;
}