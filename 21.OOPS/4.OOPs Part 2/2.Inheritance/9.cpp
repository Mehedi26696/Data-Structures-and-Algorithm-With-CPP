

// Hybrid Inheritance

// Combination of more than 1 type of inheritance

#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    int age;
    int size;
    string name;
};
class D
{    
    public:
    int width;
};

// Multiple and Hierarical Inheritance (multiple is c from A and D and hierarical is B,C from A)
class B : public A
{
public:
    int price;
    string color;
};

class C : public A, public D
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

    cout << obj2.width << endl;

    return 0;
}