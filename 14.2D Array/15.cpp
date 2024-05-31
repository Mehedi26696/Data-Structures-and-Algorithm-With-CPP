// Write a program to Print the transpose of the matrix entered by the user.
// 2nd way

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
    for (int i = 0; i < r; i++)
    {
        for (int j = i + 1; j < c; j++)
        {
            int temp = arr1[i][j];
            arr1[i][j] = arr1[j][i];
            arr1[j][i] = temp;
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}