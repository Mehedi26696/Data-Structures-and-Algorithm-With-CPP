
//OOPs introduction

//Object-Oriented Programming (OOP) is a programming paradigm that models real-world entities as objects. 

// Objects: Instances of classes that encapsulate data and methods.
// Classes: Blueprints or templates for creating objects.(user defined data type)
// Encapsulation: Bundling data and methods together within an object to protect data integrity.




#include<bits/stdc++.h>
using namespace std;


//creating class

class Man{
    //properties

    int health;
};
int main()
{
    //creating object using class

    Man m1;

    cout<< "size of object :"<<sizeof(m1)<<endl;
    return 0;
}