//Shallow coopy
//default copy consttructor does shallow copy
//shallow copy-> access same memory by different name

#include<bits/stdc++.h>
using namespace std;
class man {
    //properties
    private:
    int health;
    public:
    char level;
    char *name;

    man(){
        cout<<"Simple Constructor Called"<<endl;
        name = new char[100];
    }
    
    //parameterised constructor
    man(int health,char level){
       
      // cout<<"The address of  this : "<<this<<endl;
       this->health = health;
       this->level =level;
    }
    

    //copy constructor

    // man (man& temp){
    //     cout<<"Copy Constructor Called"<<endl;
    //     this->health = temp.health;
    //     this->level = temp.level;
    // }
    void print(){
        cout<<"Name is : "<<this->name<<",";
        cout<<"Health is : " <<this->health<<",";
        cout<<"Level is : "<<this->level<<endl;

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
    void setName(char name[])
    {
        strcpy(this->name,name);
    }
};
int main()
{   
    
    man m1;
    m1.setHealth(12);
    m1.setLevel('D');

    char name[7] = "Dhaka";

    m1.setName(name);

    m1.print();


    //use default copy constructor

    man m2(m1);
    m2.print();

    m1.name[0] = 'B';

    m1.print();

    m2.print();

    

 

    
    return 0;
}


// Simple Constructor Called
// Name is : Dhaka,Health is : 12,Level is : D 
// Name is : Dhaka,Health is : 12,Level is : D 
// Name is : Bhaka,Health is : 12,Level is : D 
// Name is : Bhaka,Health is : 12,Level is : D 