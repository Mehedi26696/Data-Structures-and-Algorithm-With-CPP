
// Hierarical Inheritance

// One class serverd as parents for more than one class
// A to B and C ,then B to D and E, C to F and G and so on

#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    int age;
    int size;
    string name;
};

class B : public A
{
public:
    int price;
    string color;
};

class C : public A
{
public:
    int num;
    int height;
};

int main()
{
    B obj1;
    C obj2;

    cout << obj1.age << endl;
    cout << obj1.size << endl;
    cout << obj1.name << endl;

    cout << obj2.age << endl;
    cout << obj2.size << endl;
    cout << obj2.name << endl;

    cout << obj1.price << endl;
    cout << obj1.color << endl;

    cout << obj2.num << endl;
    cout << obj2.height << endl;
    return 0;
}