// check pallindrome
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    char name[20];
    cin >> name;
    int count = 0;
    int i = 0;
    int flag = 0;
    while (name[i] != '\0')
    {
        count++;
        i++;
    }
    int start = 0;
    int end = count - 1;

    while (start < end)
    {
        if (name[start] != name[end])
        {
            flag=1;
        }
         

        start++;
        end--;
    }
    if (flag == 1)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }

    return 0;
}