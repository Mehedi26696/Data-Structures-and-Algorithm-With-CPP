//Getter and setter

//using for accessing private class



#include<bits/stdc++.h>
using namespace std;
class man {
    //properties
    private:
    int health;
    public:
    char level;

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
    man m1;
    
    m1.setHealth(65);
    m1.level = 'A';
    cout<<"Health is:"<<m1.getHealth()<<endl;
    cout<<"Level is:"<<m1.level<<endl;

     
    return 0;
}