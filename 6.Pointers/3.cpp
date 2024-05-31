#include <iostream>
using namespace std;
int main()
{
    int x;
    int *p = &x;
    cout << &x << endl;
    cout << p << endl;
    cout << &p << endl;
    float y;
    float *q = &y;
    cout << &y << endl;
    cout << q << endl;
    cout << &q << endl;
    bool z;
    bool *r = &z;
    cout << &z << endl;
    cout << r << endl;
    cout << &r << endl;
    char a;
    char *s = &a;
    cout << &a << endl;
    cout << s << endl;
    cout << &s << endl;

    return 0;
}