#include <bits/stdc++.h>
using namespace std;
int main()
{
    char ch[6] = "abcde";
    //print entire string because for char array implementation of cout is different
    cout << ch << endl;
    cout << &ch << endl;

    char *c = &ch[0];
    //print entire array
    cout << c << endl;

    // char temp='t';
    // char *p=&temp;
    // cout<<p<<endl;
    //gives an error sometimes pointer start printing until it's found a null character

    
    return 0;
}