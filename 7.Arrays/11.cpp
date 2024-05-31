// Arrays and pointers

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {89, 5, 2, 7, 6};
    int *ptr = arr;
    // int *ptr=&arr; -> it is invalid
    int *p = &arr[0];
    // int *p=arr[0]; -> it is invalid
    cout << ptr << endl;
    cout << p << endl;
    cout << *ptr << endl;
    // 0x61fef4
    // 0x61fef4
    //89 -> cause array and arr[0] address same so dereference korle first element print hobe 
    cout << ptr[0]<<" ";
    cout << ptr[1]<<" ";
    cout << ptr[2]<<" ";
    cout << ptr[3]<<" ";
    cout << ptr[4]<<" ";
    cout<<endl;
    for (int i = 0; i < 5; i++)
    {
         cout << ptr[i]<<" ";
    }
    

    return 0;
}