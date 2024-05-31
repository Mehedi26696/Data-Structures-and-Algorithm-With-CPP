

#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v1;
    vector<int> v2;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v1.push_back(a);
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int a;
        cin >> a;
        v2.push_back(a);
    }
    int i = 0;
    int j = 0;
    int k = 0;
    int a = v1.size();
    int b = v2.size();
    int c = a + b;
    vector<int> v3(c);
    while (i < a && j < b)
    {
        if (v1[i] < v2[j])
        {
            v3[k] = v1[i];
            i++;
        }
        else
        {
            v3[k] = v2[j];
            j++;
        }
        k++;
    }
    if (i >= n) //-> if all v1 elements covered
    {
        while (j < m)
        {
            v3[k] = v2[j];
            j++;
            k++;
        }
    }
    if (j >= m) //-> if all v2 elements covered
    {
        while (i < n)
        {
            v3[k] = v1[i];
            k++;
            j++;
        }
    }
    for (int k = 0; k < c; k++)
    {
        cout << v3[k] << " ";
    }

    return 0;
}
/*
4
1 3 4 5
6
2 5 7 8 9 10
1 2 3 4 5 5 7 8 9 10

*/