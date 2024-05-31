/*
 A B C D
 A B C D
 A B C D
 A B C D

*/

#include<iostream>
using namespace std;
int main()
{  
    int r;
    
    cin>>r;
    
   for (int i = 1; i <=r; i++)
   {   
    //char ch='A';
     for (int j = 1; j <=r; j++)

     {
        cout<<(char)(j+64)<<" ";
        /* cout<<ch<<" ";
         ch++;*/
     }
     cout<<endl;
   }
   
    return 0;
}