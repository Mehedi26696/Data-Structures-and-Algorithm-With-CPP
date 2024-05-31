// range based loops

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    vector<int> v = {5, 6, 3, 4, 5, 6};
    for (int value : v) // range based loops, by reference
    {
        cout << value << " ";
    }
    cout<<endl;
    for (int &value : v) 
    {
         value++;
    }
    for (int value : v) 
    {
        cout << value << " ";//value changed
    }
    return 0;
}