// Find the max elements of a given matrix of n x m.
// Index of max elements

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
    int max = arr1[0][0];
    int a, b;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (arr1[i][j] > max)
            {
                max = arr1[i][j];
                a = i;
                b = j;
            }
        }
    }
    cout << max << endl;
    cout << "Index of max elements is : " << a << " " << b;
    return 0;
}