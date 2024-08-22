
//inshort: if mode is private -> then public becomes private,protected becomes private, //private becomes ->(not accessible)


// If we derive a subclass from a Private base class. Then both public members and protected members 
// of the base class will become private in the derived class. They can only be accessed by the member functions of the derived class.

// Private mode is the default mode that is applied when we don’t specify any mode.

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
class Male : private Human
{

    string name;

    void sleep()
    {
        cout << "Male is sleeping" << endl;
    }

    int a = height;//possible(public to private)

    string x = place;//possible(protected to private)

    //string y = book;(private to not accessible)
    

};
int main()
{
    Male obj1;

    // we can't access this because it becomes private
    // cout << obj1.age << endl;
    // cout << obj1.weight << endl;
    // cout << obj1.height << endl;

    // we cant't access it outside the class because it's private
    // cout<<obj1.place<<endl;

    // we cant't access this it's becomes private
    // cout<<obj1.book<<endl;

    // we cant't access this it's private(as default)
    //cout<<obj1.name<<endl;

    return 0;
}