#include<bits/stdc++.h>
using namespace std;

void update(int **p2)
{
    //p2=p2+1;
    //No change

    //*p2=*p2+1;
    //change in p address

    **p2=**p2+1;
    //change in i

}
int main()
{
    int i=5;
    int *p=&i;
    int **p2=&p;
    
    cout<<i<<endl;
    cout<<*p<<endl;
    cout<<**p2<<endl;
    
    cout<<"Before:"<<endl;
    cout<<i<<endl;
    cout<<p<<endl;
    cout<<p2<<endl;
    update(p2);
    cout<<"After:"<<endl;
    cout<<i<<endl;
    cout<<p<<endl;
    cout<<p2<<endl;
    
    

    return 0;
}