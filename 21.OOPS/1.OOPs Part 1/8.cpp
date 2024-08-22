
//parameterised constructor

//if constructor argument variable is the same as the class variable name and we want to update class variable by the argument of constructor
//then we have to use "this" keyword this is pointer and it stored current object address


#include<bits/stdc++.h>
using namespace std;
class man {
    //properties
    private:
    int health;
    public:
    char level;

    // man(){
    //     cout<<"Constructor Called"<<endl;
    // }
    
    //parameterised constructor
    man(int health){
       
       cout<<"The address of  this : "<<this<<endl;
       this->health = health;
    }

    int getHealth(){

        return health;
    }

    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health = h;
    }

    void setLevel(char ch){
        level = ch;
    }
};
int main()
{   
    //static
    man m1(30);
    cout<<"The address of current object : "<<&m1<<endl;
   // m1.getHealth();

    //dynamic

    man *m2 = new man(50);
    cout<<"The address of current object : "<<m2<<endl;
     

    
    return 0;
}