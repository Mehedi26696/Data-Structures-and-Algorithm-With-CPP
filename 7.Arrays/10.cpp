// passing array to function

#include <iostream>
using namespace std;
void display(int a[], int size)//int a[] and int*a same thing

{
    // int size = sizeof(a) / sizeof(a[0]); is not valid
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
void change(int b[], int size)//int b[] and int*b same thing
{
    b[0] = 100;
}
int main()
{
    int arr[] = {1, 4, 2, 7, 46};
    int size = sizeof(arr) / sizeof(arr[0]);
    display(arr, size);
    change(arr, size);
    display(arr, size);

    return 0;
}
/*
in void or other function we can't calculate size of array cause int a[] is a pointer 
that's why calculate size of a array in main function and we mention size when we call it

*/