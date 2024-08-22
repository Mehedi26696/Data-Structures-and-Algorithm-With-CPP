//Access modifires

//Public,Private,Protected

//By default class has private access modifiers

//public has accessed inside of the class as well as outside of the class

//private has accessed only inside the class





#include<bits/stdc++.h>
using namespace std;
class man {
    //properties
    public:
    int health=5;
    char level='A';
};
int main()
{
    man m1;
    
    cout<<"Health is:"<<m1.health<<endl;
    cout<<"Level is:"<<m1.level<<endl;
    return 0;
}