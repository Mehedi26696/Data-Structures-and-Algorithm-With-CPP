// array reverse the array without using extra array

#include <bits/stdc++.h>
using namespace std;
void print(vector<int> &a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
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

    print(v);
    int i=0;
    int j=v.size()-1;
    while (i<=j)
    {
        int temp=v[i];//swap v[i] and v[j]
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }

    print(v);

    return 0;
}