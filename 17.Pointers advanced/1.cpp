// basic

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num = 5;
    int *p = &num;

    int x = num + 1;
    (*p)++;
    int y = *p;

    int z = ++(*p);
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;

    return 0;
}