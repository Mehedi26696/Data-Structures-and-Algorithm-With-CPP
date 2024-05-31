//  write a program to find difference beetween two characters ascii value
#include <iostream>
using namespace std;
int main()
{
    char x, y;
    int n;
    cin >> x >> y;
    n = (int)x - (int)y;
    if (n < 0)
    {
        n = -n;
    }
    cout << n;
}