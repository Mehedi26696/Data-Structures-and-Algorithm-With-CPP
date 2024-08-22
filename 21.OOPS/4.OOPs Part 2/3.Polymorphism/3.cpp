
//Run time polymorphism is also called dynamic polymorphism

//method overriding

//rules: method of the parents and child have to be same name
//have to be same parameter
//it is possible only by inheritance



#include<bits/stdc++.h>
using namespace std;
class Animal{
    public:
    void speak(){
        cout<<"speaking"<<endl;
    }
};

class Dog : public Animal{
    public:
    void speak(){
        cout<<"Barking"<<endl;
    }
};
int main()
{
    
    Dog obj;
    obj.speak();
    return 0;
}

