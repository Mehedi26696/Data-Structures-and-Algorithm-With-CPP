/*
4 4 4 4 4 4 4
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4



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
            int x=min(a,b);
            cout<<r-x+1;
            
        }

        cout << endl;
    }

    return 0;
}