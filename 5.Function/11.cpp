// using function count number of a digit and print sqaure of them

#include <iostream>
using namespace std;
void count(int n)
{
    int c = 0;
    while (n > 0)
    {
        n = n / 10;
        c++;
    }
    cout << c<<endl;
}
int square(int n)
{   int a;
    while(n>0)
    {
        a=n%10;
        n=n/10;
        cout<<a*a<<endl;
    }
}

int main()
{
    int n;
    cin >> n;
    count(n);
    square(n);
    return 0;
}