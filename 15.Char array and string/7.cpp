//Maximum occurring character
//lower and upper consider as same
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    vector<int>v(26,0);

    for (int i = 0; i <  s.length(); i++)
    {   
        char ch=s[i];
        int number=0;
         if ((ch>='a' && ch<='z'))
         {
             number=ch-'a';
         }
         else
         {
            number=ch-'A';
         }
         v[number]++;
    }
    int maxi=-1;
    int ans=0;
    for (int i = 0; i <  v.size(); i++)
    {
         if (maxi<v[i])
         {
             ans=i;
             maxi=v[i];
         }
         
    }
    char final=(char)ans+'a';
    cout<<final<<endl;
    
    return 0;
}