/*
    *
   ***
  *****
 *******
  *****
   ***
    *
 */
#include <iostream>
using namespace std;
int main()
{
    int r;
    cin >> r;
    int stars=1;
    int space=r-1;
    for (int i = 1; i <=2*r-1; i++)
    {
         for (int j =1; j <=space; j++)
         {
            cout<<" ";
         }
         if (i<=r-1)
         {
            space--;
         }
         else
         {
            space++;
         }
         for (int k = 1; k <=stars; k++)
         {
            cout<<"*";
         }
         if (i<=r-1)
         {
            stars+=2;
         }
         else
         {
            stars-=2;
         }
         cout<<endl;
         
         
    }
    
    return 0;
}