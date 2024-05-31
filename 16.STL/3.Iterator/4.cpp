// range based loops

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    vector<int> v = {5, 6, 3, 4, 5, 6};
    for (int value : v) // range based loops, ekhane value copy hoiche not actual elements
    {
        cout << value << " ";
    }
    cout<<endl;
    for (int value : v) 
    {
         value++;
    }
    for (int value : v) 
    {
        cout << value << " ";//value doesn't change because it's a copy 
    }
    return 0;
}