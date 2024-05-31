// write a function to find the first and last digit of a number without returning anything

#include <iostream>
using namespace std;
void find(int n, int *p1, int *p2)
{
    *p2 = n % 10;
    while (n > 9)
    {
        n = n / 10;
        
    }
    *p1 = n;
}
int main()
{
    int n;
    cin >> n;
    int firstdigit, lastdigit;
    int *p1 = &firstdigit;
    int *p2 = &lastdigit;
    find(n, p1, p2);
    cout << firstdigit << " " << lastdigit;

    return 0;
}
