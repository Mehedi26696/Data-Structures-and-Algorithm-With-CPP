// Find the sum of a given matrix of n x m.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r, c;
    cout << "Enter rows no" << endl;
    cin >> r;
    cout << "Enter columns no" << endl;
    cin >> c;
    int arr1[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr1[i][j];
        }
    }
    int sum = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            sum += arr1[i][j];
        }
    }
    cout << sum << endl;
    return 0;
}