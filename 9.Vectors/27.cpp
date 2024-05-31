// sorting arrays of 0,1,2 without sort function 2nd method(Dutch flag algorithm)

#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    int low = 0;
    int mid = 0;
    int high = v.size()-1;
    while (mid <= high)
    {
        if (v[mid] == 2)
        {
            // swap(v[mid], v[high]);
            int temp=v[mid];
            v[mid]=v[high];
            v[high]=temp;

            high--;
        }
        if (v[mid] == 0)
        {

            // swap(v[mid], v[low]);
            int temp=v[mid];
            v[mid]=v[low];
            v[low]=temp;
            mid++;
            low++;
        }
        if (v[mid] == 1)
        {
            mid++;
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    /*
8
1 2 1 0 1 2 0 1
0 0 1 1 1 1 2 2
    */

    return 0;
}