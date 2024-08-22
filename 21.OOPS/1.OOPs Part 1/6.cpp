
//static and dynamic allocation

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
    //static allocation
    man m1;

    m1.setHealth(65);
    m1.level = 'A';
    cout<<"Health is:"<<m1.getHealth()<<endl;
    cout<<"Level is:"<<m1.level<<endl;


    //dynamic allocation

    man *m2 = new man;

    (*m2).setHealth(65);
    (*m2).level = 'A';
    cout<<"Health is:"<<(*m2).getHealth()<<endl;
    cout<<"Level is:"<<(*m2).level<<endl;

    cout<<"Health is:"<<m2->getHealth()<<endl;
    cout<<"Level is:"<<m2->level<<endl;

    
    return 0;
}