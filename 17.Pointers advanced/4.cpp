#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10] = {2, 5, 6, 8};
    cout << arr << endl;
    cout << &arr[0] << endl;
    cout << *arr << endl;
    cout << *arr + 1 << endl;
    cout << *(arr + 1) << endl;
    cout << (*arr) + 1 << endl;
    //arr[i]=*(arr+i) or i[arr]=*(arr+i)
     cout<<1[arr]<<endl;
    
    return 0;
}