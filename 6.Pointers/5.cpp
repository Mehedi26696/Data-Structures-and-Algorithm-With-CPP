#include <iostream>
using namespace std;
int main()
{
    int x = 10;
    int *p = &x;
    cout << x << endl;
    cout << *p << endl;
    *p = 8;
    cout << x;
    return 0;
}