//Reference variable
//Memory address same but name different

#include<bits/stdc++.h>
using namespace std;
int main()
{    
    int i=5;
    //Reference variable creation
    int &j=i;
    cout<<i<<endl;
    cout<<j<<endl;
    cout<<&i<<endl;
    cout<<&j<<endl;
    i++;
    cout<<i<<endl;
    j++;
    cout<<i<<endl;
    return 0;
}