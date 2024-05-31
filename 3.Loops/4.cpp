// print -1,3,5,7,9.........up to n terms
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cout<<-1;
    for (int i = 3; i <=2*n-1; i+=2)
    {
        cout<<" "<<i;
    }
    
    return 0;
}