//static keyword
//we can access this without creating an object
//belongs to class not object
//static function can only acces static member


#include<bits/stdc++.h>
using namespace std;
class man {
    //properties
    private:
    int health;
    public:
    char level;
    char *name;
    static int timeToComplete;

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

    static int random(){

        //cout<<health<<endl; //give error because health is not static member

        return timeToComplete;
    }


};

//intialize -> data type className :: var_name = value; 

int man::timeToComplete = 5;
int main()
{   
    
    cout<<man :: random()<<endl;

    return 0;
}