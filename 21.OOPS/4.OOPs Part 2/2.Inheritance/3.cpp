
////inshort:  if mode is protected -> then public becomes protected,protected becomes protected,private becomes(not accessible)

// If we derive a subclass from a Protected base class. Then both public members and protected members of the base class will become protected in the derived class.

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
class Male : protected Human
{

    string name;

    void sleep()
    {
        cout << "Male is sleeping" << endl;
    }

    int a = height; //possible(public to protected)

    string x = place; //possible(protected to protected - child class)

    //string y = book; //not possible(private to not accessible)
};
int main()
{
    Male obj1;

    // we can't access this because it becomes protected
    // cout << obj1.age << endl;
    // cout << obj1.weight << endl;
    // cout << obj1.height << endl;

    // we cant't access it outside the class because it's protected
    // cout<<obj1.place<<endl;

    // we cant't access this it's becomes private
    // cout<<obj1.book<<endl;

    // we cant't access this it's private(as default)
    //cout<<obj1.name<<endl;

    return 0;
}