// Arrays and pointers

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {4, 5, 2, 7, 6};
    int *ptr = arr;
    for (int i = 0; i < 5; i++)
    {
        cout << *ptr << " ";
        ptr++;
    }
    cout << endl;
    ptr = arr; // ptr is pointing to the first element of an array
    *ptr = 8;  // ptr[0]=8;
    ptr++;     // ptr is pointing to the 2nd element of an array
    *ptr = 9;  // ptr[1]=9;
    ptr--;     // ptr is pointing to the first element of an array
    for (int i = 0; i < 5; i++)
    {
        cout <<*ptr << " ";
        ptr++;
    }
     ptr = arr; // ptr is pointing to the first element of an array

    return 0;
}