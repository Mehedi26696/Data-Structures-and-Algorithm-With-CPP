
//const keyword

// The const variable cannot be left un-initialized at the time of the declaration.
// It cannot be assigned value anywhere in the program.
// Explicit value needed to be provided to the constant variable at the time of declaration of the constant variable.


#include <iostream>
using namespace std;
 
int main()
{

    // const int x;  CTE error
    // x = 9;   CTE error
    const int y = 10;
    cout << y<<endl;

    return 0;
}