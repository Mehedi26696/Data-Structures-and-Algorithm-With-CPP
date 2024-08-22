//Destructor

//memory de-allocation(memory free)

//when class created defualt destructor will be autometically created as the same name

//destruction has no return type and no input,output

//difference between destructor and constructor is (~) sign

//static->destructor called autometically
//dynamic-> destructor didn't called autometically. We have to do it manually

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

    man (man& temp){

        char *ch = new char [strlen(temp.name)+1];

        strcpy(ch,temp.name);
        cout<<"Copy Constructor Called"<<endl;
        this->name = ch;
        this->health = temp.health;
        this->level = temp.level;
    }
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

    ~man(){
        cout<<"Destructor called"<<endl;
    }

};
int main()
{   
    //static
    man m1;
    
    //dynamic
    man *m2= new man;
    
    //destructor called by manually
    delete m2;


    return 0;
}


// Simple Constructor Called
// Simple Constructor Called
// Destructor called



// Simple Constructor Called
// Simple Constructor Called
// Destructor called
// Destructor called


