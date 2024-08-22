
// multiple inheritance
// inherit c from a and b

#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    int age;
    int size;
    string name;
};

class B
{
public:
    int price;
    string color;
};

//Multiple Inheritance
class C : public A, public B
{
public:
    int num;
    int height;
};

int main()
{
    C obj;

    cout << obj.age << endl;
    cout << obj.size << endl;
    cout << obj.name << endl;

    cout << obj.price << endl;
    cout << obj.color << endl;

    cout << obj.num << endl;
    cout << obj.height << endl;
    return 0;
}