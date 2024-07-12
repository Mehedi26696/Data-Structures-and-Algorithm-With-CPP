//Fibonacci series

#include <iostream>
using namespace std;
 
// First two values
int n1 = 1;
int n2 = 0;
 
// Recursive function to print the
// fibonacci series
void fib(int n)
{
    if (n < 3) {
        return;
    }
    int n3 = n1 + n2;
    n2 = n1;
    n1 = n3;
    cout << n3 << " ";
    return fib(n - 1);
}
 
// Function that handles the first two terms
// and calls the recursive function
void printFib(int n)
{
 
    
 
    // When the number of terms is 1
    if (n == 1) {
        cout << 0;
    }
 
    // When the number of terms is 2
    else if (n == 2) {
        cout << "0 1";
    }
 
    // Number of terms greater than 2
    else {
        cout << "0 1 ";
        fib(n);
    }
    return;
}
 
int main()
{
    int n;
    cin>>n;
 
    // Function call
    printFib(n);
    return 0;
}