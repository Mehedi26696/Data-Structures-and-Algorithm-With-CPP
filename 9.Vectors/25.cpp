// sorting arrays of 0's and 1's with out using sort function 2nd method

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
    int i=0;
    int j=v.size()-1;
    while (i<j)
    {
        if (v[i]==0)
        {
            i++;
        }
        if (v[j]==1)
        {
            j--;
        }
        if(i>j) break;
                       /*8
                     1 1 0 1 0 1 1 0 etar jonno break dewa lagbe ekhane
                     0 0 1 0 1 1 1 1*/

        if (v[i]==1 && v[j]==0)
        {
            int temp=v[i];
            v[i]=v[j];
            v[j]=temp;
            i++;
            j--;
        }
           
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }   
    return 0;
}