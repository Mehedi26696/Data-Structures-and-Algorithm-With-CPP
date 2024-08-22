
//Both return type and parameter of the function are of const types.

#include <iostream>
using namespace std;

const int foo(const int y)
{
    // y = 9; it'll give CTE error as
    // y is const var its value can't
    // be change
    return y;
}

// Driver code
int main()
{
    int x = 9;
    const int z = 10;
    cout << foo(x) << '\n' << foo(z);

    return 0;
}