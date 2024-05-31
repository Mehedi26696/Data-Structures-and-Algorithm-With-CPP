// Armstrong number example: 153=(1*1*1)+(5*5*5)+(3*3*3)
// print all armstrong numbers between 1 to 500

#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    for (int i = 1; i < 500; i++)
    {    a=i;
         b=0;
         while (a)
         {  
             c=a%10;
             b+=c*c*c;
             a=a/10;
         }
         if (b==i)
         {
            cout<<i<<endl;
         }
         
    }

    return 0;
}
