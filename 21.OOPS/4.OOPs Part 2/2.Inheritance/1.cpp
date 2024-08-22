
// The capability of a class to derive properties and characteristics from another class is called Inheritance.

#include <bits/stdc++.h>
using namespace std;

// base class/super class/parent class
class Human
{

public:
    int height;
    int weight;
    int age;

public:
    int getAge()
    {
        return this->age;
    }
    void setWeight(int w)
    {
        this->weight = w;
    }
};

// inherit in public mode

// syntax-> class class_name: mode base_class_name{}
class Male : public Human
{

public:
    string name;

    void sleep()
    {
        cout << "Male is sleeping" << endl;
    }
};
int main()
{
    Male obj1;
    cout << obj1.age << endl;
    cout << obj1.weight << endl;
    cout << obj1.height << endl;

    cout << obj1.name << endl;
    obj1.setWeight(100);
    cout << obj1.weight << endl;
    obj1.sleep();
    return 0;
}

////protected class is similar like private class but the differnce is we can access protected member inside this class or derive class

// if base class is public ->then if we inherit it in public mode then inherit member will be public
// if base class is public ->then if we inherit it in protected mode then inherit member will be protected
// if base class is public ->then if we inherit it in private mode then inherit member will be private

// so if base is public then inherit member will be same as mode

// if base class is protected ->then if we inherit it in public mode then inherit member will be protected
// if base class is protected ->then if we inherit it in protected mode then inherit member will be protected
// if base class is protected ->then if we inherit it in private mode then inherit member will be private

// if base class is private ->then if we inherit it in public mode then inherit member(not accessible)
// if base class is private ->then if we inherit it in protected mode then inherit member(not accessible)
// if base class is private ->then if we inherit it in private mode then inherit member(not accessible)

// so if base is private then which ever mode it is doesn't matter we can't inherit

// inshort : if mode is public-> then public becomes public,protected becomes protected,private becomes private(not accessible)

// inshort:  if mode is protected -> then public becomes protected,protected becomes protected,private becomes private(not accessible)

// inshort: if mode is private -> then public becomes private,protected becomes private,private becomes private -> so(not accessible)
