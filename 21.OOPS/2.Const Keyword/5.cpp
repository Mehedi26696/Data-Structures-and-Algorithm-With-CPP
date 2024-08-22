// Passing const argument value to a non-const parameter of a function isn’t valid it gives a compile-time error.
//that's we have to also use const in parameter

#include <iostream>
using namespace std;

int foo(const int* y) 
{ 
    return *y; 
}

 
int main()
{
    int z = 8;
    const int* x = &z;
    cout << foo(x);
    return 0;
}

// passing const pointer will not result in any error because another pointer is created which also points to the same memory location.


// 1. int value = 5;         // non-const value

// 2. const int *ptr_1 = &value;      // ptr_1 points to a “const int” value, so this is a pointer to a const value.

// 3. int *const ptr_2 = &value;        // ptr_2 points to an “int”, so this is a const pointer to a non-const value.

// 4. const int *const ptr_3 = &value;   // ptr_3 points to a “const int” value, so this is a const pointer to a const value.