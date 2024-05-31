// Wap a program to find a number if its prime or not

#include <iostream>
using namespace std;
int main()
{
    int a;
    int p = 0;
    cin >> a;
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            p = 1;
        }
    }
    if (p == 0)
    {
        cout << "It's a prime number";
    }
    else
    {
        cout<<"It's not a prime";
    }
    

    return 0;
}