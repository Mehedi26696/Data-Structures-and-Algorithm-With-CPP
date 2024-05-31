// write a code check a character is alphabet or not
#include<iostream>
using namespace std;
int main()
{
    char ch;
    cin>>ch;
    if ((ch>'A' && ch<'Z') || (ch>'a' && ch<'z'))
    {
        cout<<"It is a alphabet";
    }
    else
    {
        cout<<"It is not a alphabet";
    }
    
    
    return 0;
}