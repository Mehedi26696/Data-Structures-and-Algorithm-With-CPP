// For Initialization of Non-Static const Data Members

#include <iostream>
using namespace std;

class Test
{
    const int t;

public:
    // Initializer list must be used
    Test(int t) : t(t) {}
    int getT()
    {
        return t;
    }
};

int main()
{
    Test t1(10);
    cout << t1.getT();
    return 0;
}