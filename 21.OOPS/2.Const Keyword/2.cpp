//const in pointer

#include <iostream>
using namespace std;

 
int main()
{
    int x = 10;
    char y = 'M';

    const int* i = &x;
    const char* j = &y;

    // Value of x and y can be altered,
    // they are not constant variables
    x = 9;
    y = 'A';

    // Change of constant values because,
    // i and j are pointing to const-int
    // & const-char type value
    // *i = 6;
    // *j = 7;

    cout << *i << " " << *j;
}


// i and j are two pointer variables that are pointing to a memory location const int-type and char-type,
// but the value stored at these corresponding locations can be changed as we have done above. 