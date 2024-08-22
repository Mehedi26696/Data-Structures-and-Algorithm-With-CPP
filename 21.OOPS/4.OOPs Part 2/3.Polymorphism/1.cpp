
// Polymorphism ->the ability of something to have or to be displayed in more than one form.

// Polymorphism is two type -Compile Time and Run Time

// Compile Time Polymorphism is two type -> Function Overloading and Operator Overloading


//If we want to overload same function then we have to make changes in argument it can be any type of changes (like no of argument,argument type)
//But we can't overload by changing return type

//Compile Time Polymorphism is also called static polymorphism

#include <bits/stdc++.h>
using namespace std;
class A
{
public:
    void sayHello()
    {
        cout <<"Rain doesn't feel good all time" <<endl;
    }

    void sayHello(string name)
    {
        cout <<"Rain doesn't feel good"<< name <<endl;
    }
};
int main()
{
    A obj;
    obj.sayHello();
    return 0;
}