// using function print all odd numbers between two digit
#include <iostream>
using namespace std;
void odd(int a, int b)
{
    if (a > b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    for (int i = a; i <= b; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << " ";
        }
    }
}
int main()
{
    int a, b;
    cin >> a >> b;
    odd(a, b);
    return 0;
}