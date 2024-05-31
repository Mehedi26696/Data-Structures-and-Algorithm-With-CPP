// v.at


#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(9);          
    v.push_back(4);  
    v.push_back(6);
    v.push_back(8);
    for (int i = 0; i < 4; i++)
    {
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
    v.at(2)=45;// we can use v.at for update or accessing any elements
    for (int i = 0; i < 4; i++)
    {
        cout<<v.at(i)<<" ";
    }
    
    return 0;
}
