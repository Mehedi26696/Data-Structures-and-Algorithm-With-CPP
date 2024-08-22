
//The return type of the function() is const and so it returns a const integer value to us.

#include <iostream>
using namespace std;

const int foo(int y)
{
    y--;
    return y;
}

int main()
{
    int x = 9;
    const int z = 10;
    cout << foo(x) << '\n' << foo(z);

    return 0;
}