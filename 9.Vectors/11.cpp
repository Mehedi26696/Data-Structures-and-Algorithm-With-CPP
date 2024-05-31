//passing vectors in function
//pass by value



#include <bits/stdc++.h>
using namespace std;
void change(vector<int> a)
{
    a[0] = 100;
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
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
    cout << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}
/*
9 4 6 8   
100 4 6 8 
9 4 6 8 
passing vectors in function is pass by value so there will be created a new vector
so it's not like array in this case
*/