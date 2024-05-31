//reverse part of array

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
    int a;
    int b;
    cin>>a>>b;
    int i=a;
    int j=b;
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
}/*
5
7 8 9 4 5
7 8 9 4 5 
1 3
7 4 9 8 5 


*/