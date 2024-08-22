
// Encapsulation in C++ is defined as the wrapping up of data and information in a single unit. 
// In Object Oriented Programming, Encapsulation is defined as binding together the data and the functions that manipulate them.

//basically class is a form of encapsulation

//Full encapsulated class -> all data memeber should be private

//Advantages -> Data hiding(security increase),
// if we want we made our class "read only"
//Code reuseability
//unit testing


#include<bits/stdc++.h>
using namespace std;
class student{
    private:
       string name;
       int age;
       int height;
    
    public:
      int getAge()
      {
         return this->age;
      }
};
int main()
{
    student first;
    return 0;
}
