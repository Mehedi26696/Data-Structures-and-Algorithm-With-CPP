// passing array to function

#include <iostream>
using namespace std;
void display(int a[])
{
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
void change(int b[])
{
    b[0] = 100;
}
int main()
{
    int arr[5] = {1, 4, 2, 7, 46};
    display(arr);
    change(arr);
    display(arr);

    return 0;
}
/*
1 4 2 7 46
100 4 2 7 46

so we can access array from another function and update elements of the array
here arr,a,b is actaully same array because it's works pass by reference because cout<<&arr; and cout<<arr; is same
this not happen in case of variables
*/