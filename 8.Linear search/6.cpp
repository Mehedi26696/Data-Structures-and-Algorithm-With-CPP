// find the second largest element of an array by only one pass
#include <iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int max =INT_MIN;
    int smax=INT_MIN;
    for (int i = 1; i < n; i++)
    {
        if (max < arr[i])
        {   smax=max;
            max = arr[i];
        }
    }
    cout<<max<<endl;
    cout<<smax<<endl;


    return 0;
}