// k-th smallest in a array

 

// approach 1: use max heap and pop n-k elements

// time complexity: O(nlog(n-k))

// space complexity: O(n-k)




#include <bits/stdc++.h>
using namespace std;


// first way
int kthSmallest(int arr[], int n, int k)
{
    priority_queue<int> maxHeap;
    for (int i = 0; i < n; i++)
    {
        maxHeap.push(arr[i]);
        if (maxHeap.size() > n - k)
        {
            maxHeap.pop();
        }
    }
    return maxHeap.top();
}

//2nd way

int ksmallest(int arr[],int n,int k){

    priority_queue<int> maxHeap;

    // step 1: insert first k elements in max heap
    for(int i=0;i<k;i++){
        maxHeap.push(arr[i]);
    }

    // step 2: insert remaining elements in max heap and pop the top element

    for(int i=k;i<n;i++){
        if(arr[i]<maxHeap.top()){
            maxHeap.pop();
            maxHeap.push(arr[i]);
        }
    }

    return maxHeap.top();
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
    cout<<"First way to finding kth smallest" << kthSmallest(arr, n, k)<<endl;
    cout<<"Second way to finding kth smallest" << ksmallest(arr, n, k)<<endl;
    return 0;
}

