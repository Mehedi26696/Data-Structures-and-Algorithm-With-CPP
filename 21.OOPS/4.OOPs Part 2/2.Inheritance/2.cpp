

// inshort : if mode is public-> then public becomes public,protected becomes protected,private becomes (not accessible)

// base class public and inherit in public mode

// If we derive a subclass from a public base class.
// Then the public member of the base class will become public in the derived class
// and protected members of the base class will become protected in the derived class.

#include <bits/stdc++.h>
using namespace std;

// base class/super class/parent class
class Human
{

public:
    int height;
    int weight;
    int age;
    int getAge()
    {
        return this->age;
    }
    void setWeight(int w)
    {
        this->weight = w;
    }

protected:
    string place;

private:
    string book;
};

// inherit in public mode

// syntax-> class class_name: mode base_class_name{}
class Male : public Human
{

    string name;

    void sleep()
    {
        cout << "Male is sleeping" << endl;
    }
    int a = height; //possible(public to public)
    string a = place; //possible(protected to protected - child class)
    //string b = book; not possible(private to not accessible)
};
int main()
{
    Male obj1;

    // we can access this because it's in public
    cout << obj1.age << endl;
    cout << obj1.weight << endl;
    cout << obj1.height << endl;

    // we cant't access it outside the class because it's protected
    // cout<<obj1.place<<endl;

    // we cant't access this it's becomes private
    // cout<<obj1.book<<endl;

    // we cant't access this it's private(as default)
    // cout<<obj1.name<<endl;

    return 0;
}