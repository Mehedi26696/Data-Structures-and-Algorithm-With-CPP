//remove occurence of a substring

#include<bits/stdc++.h>
using namespace std;
string remove(string str, string part)
{
    while (str.length()!=0 && str.find(part)<str.length())
    {
         str.erase(str.find(part),part.length());
    }
    return str;
    
}
int main() 
{
    string s,p;
    cin>>s>>p;
    cout<<remove(s,p)<<endl;
    
    return 0;
}