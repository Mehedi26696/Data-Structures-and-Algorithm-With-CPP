//rotate array in the k steps(k<size)

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
void reverse(int i,int j,vector<int>&v)
{
    while (i<=j)
    {
        int temp=v[i];//swap v[i] and v[j]
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
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
    // int a;
    // int b;
    // cin>>a>>b;
    int k;
    cin>>k;

    reverse(0,v.size()-1-k,v);
    reverse(v.size()-k,v.size()-1,v);
    print(v);
    reverse(0,v.size()-1,v);
    print(v);

    return 0;
}
/*
7
1 6 2 3 7 4 8
1 6 2 3 7 4 8 
3
3 2 6 1 8 4 7 
7 4 8 1 6 2 3
*/