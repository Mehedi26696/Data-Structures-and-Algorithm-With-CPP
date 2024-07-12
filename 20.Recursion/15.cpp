//Check Pallindrome

#include<bits/stdc++.h>
using namespace std;
bool check(string s,int st,int en){
      
      if (st>en)
      {
         return true;
      }
      if (s[st]!=s[en])
      {
         return false;
      }
      else
      {
        return check(s,st+1,en-1);

      }
      
      
     
}
int main()
{
    string s;
    cin>>s;
    if (check(s,0,s.length()-1))
    {
         cout<<"Pallindrome"<<endl;
    }
    else
    {
        cout<<"Not Pallindrome"<<endl;
    }
    
    
    return 0;
}