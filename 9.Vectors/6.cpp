//vectors declare with initialization

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int>v(8,9);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
         cout<<v[i]<<" ";
    }
    
    return 0;
}
/*

8
9 9 9 9 9 9 9 9
*/
 