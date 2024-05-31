 //maximum occurrence

 #include<bits/stdc++.h>
 using namespace std;
 int getmaxocc(string s)
{ 
    int oc[26]={0};
      for ( int i = 0; i <  s.length(); i++)
      {    
          char ch=s[i];
          int number=0;
          if (ch>'a' && ch<'z')
          {
              number=ch-'a';
          }
          else
          {
             number=ch-'A';
          }
        
        oc[number]++;
          
      }
      int max=0;
      int idx=0;
      for (int j = 0; j < 26; j++)
      {
          if (max>oc[j])
          {
             
          }
          else
          {
             max=oc[j];
             idx=j;
          }
          
          
      }
      return idx;
      
      
 }
 int main()
 {
    string s;
    cin>>s;
    int x;
    x=getmaxocc(s);
    cout<<(char)(x+'a')<<endl;
    return 0;
 }