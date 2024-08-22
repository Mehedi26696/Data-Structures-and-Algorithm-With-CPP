
//padding and greedy alignments


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

    cout<<"size is : "<<sizeof(m1)<<endl;
    return 0;
}

//Health is:65
// Level is:A
// size is : 8 but if we calculate manually then the answer would be 5 the reason for this is padding and greedy alignment

// Padding is the technique of adding extra bytes to a structure or class to align its data members to specific boundaries. 
// This is done to ensure that the data members are accessed efficiently by the processor, 
//which typically fetches data from memory in chunks of fixed sizes, such as 4 or 8 bytes.

// Greedy alignment is a technique used to minimize padding by ordering the data members of a class in decreasing order of size. 
// This ensures that the largest data members are placed first in the class, minimizing the amount of padding required to align the subsequent data members.

