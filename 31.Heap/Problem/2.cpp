
// k-th smallest in a array

 

// approach 1:  use min heap and pop k elements

// time complexity: O(nlogk)

// space complexity: O(k)




#include <bits/stdc++.h>
using namespace std;
 
int kthSmallest(int arr[], int n, int k)
{
    priority_queue<int> minHeap;
    for (int i = 0; i < n; i++)
    {
        minHeap.push(arr[i]);
        if (minHeap.size() > k)
        {
            minHeap.pop();
        }
    }
    return minHeap.top();   
}

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int k;
    cin >> k;

    cout<<"kth smallest element is: "<<kthSmallest(arr, n, k)<<endl;
    
    return 0;
}