

//Inheritance Ambiguity

//here 'abc' is ambiguous both class has same name function and we inherit both of them in the same class so it gives an error to
//solve this problem we use scope resolution operator(::)

#include <bits/stdc++.h>
using namespace std;

class A
{
public:
   void abc(){
     cout<<"A Called"<<endl;
   }
    
};

class B
{
public:
    void abc(){
     cout<<"B Called"<<endl;
   }
    
};

//Multiple Inheritance
class C : public A, public B
{
public:
     
};

int main()
{
    C obj;

    obj.A::abc();
    obj.B::abc();

   
    return 0;
}