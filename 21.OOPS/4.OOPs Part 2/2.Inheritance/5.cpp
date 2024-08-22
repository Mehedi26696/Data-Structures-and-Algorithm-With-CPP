

// Types of inheritance

// Single,Multi-level,Multiple,Hybrid,Hierarchical

// Single inheritance
//  from a base class A if we created a sub class B then it's called single inheritance

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
int main()
{
    B obj;

    cout << obj.age << endl;
    cout << obj.size << endl;
    cout << obj.name << endl;

    cout << obj.price << endl;
    cout << obj.color << endl;
    return 0;
}