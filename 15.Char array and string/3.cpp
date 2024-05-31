//length of string without function
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    char name[20];
    cin>>name; 
    int count=0;
    int i=0;
    while (name[i]!='\0')
    {
         count++;
         i++;
    }
   cout<<count<<endl; 
    return 0;
}