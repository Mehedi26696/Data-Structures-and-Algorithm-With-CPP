
// Operator overloading

// like subtract using + sign

// syntax -> return_type operator which operator (argument){}

#include <bits/stdc++.h>
using namespace std;
class A
{
public:
    int a;
    int b;

public:
    int add()
    {
        return a + b;
    }

    void operator+(A &obj)
    {
        int value1 = this->a;
        int value2 = obj.a;
        cout << "output : " << value2 - value1 << endl;
    }

    void operator()(){
        cout<<"You done it : "<<this->a<<endl;
    }
};
int main()
{
    A obj1, obj2;
    obj1.a = 4;
    obj2.a = 7;

    obj1 + obj2;

    obj1();

    return 0;
}