// pass by refference

#include <bits/stdc++.h>
using namespace std;
void change(vector<int> &a)
{
    a[0] = 100;
}
int main()
{
    vector<int> v;
    v.push_back(9);
    v.push_back(4);
    v.push_back(6);
    v.push_back(8);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    change(v);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}
/*
9 4 6 8
100 4 6 8 
pass by references
*/