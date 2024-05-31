// Matrix multiplication

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r1, c1;
    cout << "Enter rows no" << endl;
    cin >> r1;
    cout << "Enter columns no" << endl;
    cin >> c1;
    int arr1[r1][c1];
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    int r2, c2;
    cout << "Enter second matrix rows no ";
    cin >> r2;
    cout << "Enter second matrix columns no ";
    cin >> c2;
    int arr2[r2][c2];
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cin >> arr2[i][j];
        }
    }
    int res[r1][c2];
    int con = c1;
    // Multiplying
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            // i row of mat 1 and j column of mat 2
            //(arr1[i][0],arr1[i][1],arr1[i][2].....)*(arr2[0][j],arr2[1][j],arr2[2][j].....)
            res[i][j] = 0;
            for (int k = 0; k < con; k++)
            {
                res[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}