// Arrays and pointers

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {4, 5, 2, 7, 6};
    int *ptr = arr;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << ptr[i] << " ";
    }
    cout << endl;
    
    for (int i = 0; i < 5; i++)
    {
        cout <<*ptr << " ";
        ptr++;
    }
   ptr=arr;// it is better to write cause end of loop address oi pointer doesn't point an any element of array
            // so writing ptr=arr; means again we point the first element of an array
    return 0;
}
/*
4 5 2 7 6 
4 5 2 7 6 
4 5 2 7 6
*/