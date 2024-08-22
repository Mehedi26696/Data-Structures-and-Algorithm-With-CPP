//constructor
//it's invove in the time of object creation,no return type,no input and output

//when we create a class the autometically creates a default constructor with the same name

//when we write man(class name) m1 then it's called like m1.man()

//when we create a constructor as the same name of class then the default constructor autometically replace by the new one








#include<bits/stdc++.h>
using namespace std;
class man {
    //properties
    private:
    int health;
    public:
    char level;

    man(){
        cout<<"Constructor Called"<<endl;
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
    cout<<"First"<<endl;
    man m1;
    cout<<"Second"<<endl;

    //dynamic

    cout<<"First"<<endl;
    man* m2 = new man;
    cout<<"Second"<<endl;


    
    return 0;
}