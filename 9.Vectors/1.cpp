#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v; //not necessary to mention size 

    v.push_back(9); // For inserting or input we always use push back               
    v.push_back(4); // if we use v[0]=9 instead of push back it will give a segmentation errror
    v.push_back(6);
    v.push_back(8);
    cout << v[0] << " "; // for update we may use [] 
    cout << v[1] << " ";
    cout << v[2] << " ";
    cout << v[3] << " ";
    return 0;
}