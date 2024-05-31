// check a is divisible by b and c or not
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a % b == 0 && a % c == 0)
    {
        cout << a << " is divisible by " << b << " and " << c;
    }
    else
    {
        cout << a << " is not divisible by " << b << " and " << c;
    }

    return 0;
}