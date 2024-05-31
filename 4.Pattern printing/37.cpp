/*

1111111
1222221
1233321
1234321
1233321
1222221
1111111

*/

#include <iostream>
using namespace std;
int main()
{
    int r;
    cin >> r;
    for (int i = 1; i <=2*r-1; i++)
    {
        for (int j = 1; j <=2*r-1; j++)
        {  
            int a=i;
            int b=j;
            if(a>r)
            {
                a=2*r-i;
            }
            if (b>r)
            {
                b=2*r-j;
            }
            
            cout<<min(a,b);
            
        }

        cout << endl;
    }

    return 0;
}