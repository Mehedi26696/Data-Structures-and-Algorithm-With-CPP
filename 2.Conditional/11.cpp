// check whether a triangle is equilateral,scalene or isoscales by the input of it's sides
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a == b && b == c && c == a)
    {
        cout << "Equilateral";
    }
    else if (a == b || b == c || c == a)
    {
        cout << "Isoscales";
    }
    else
    {
        cout << "Scalene";
    }

    return 0;
}