// Dynamic 2D array

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int rows, cols;
    cin >> rows >> cols;

    // creation a 2D array
    int **arr = new int *[rows];
    for (int i = 0; i < rows; i++)
    {
        arr[i] = new int[cols];
    }
    // Taking input of 2D array
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }
    // Print 2D array
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    //Memory free for 2D array
      for (int i = 0; i < rows; i++)
    {
        delete []arr[i];
    }

    delete []arr;
    return 0;
}