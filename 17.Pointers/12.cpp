// Practice
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int first = 16;
    int *ptr = &first;
    int *q = ptr;
    (*q)++;
    cout << first << endl;
    return 0;
}