//stoping by null character
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    char name[20];
    cin>>name;
    name[4]='\0';
    cout<<name<<endl;//char array output(null character porjontow print korbe)
    return 0;
}