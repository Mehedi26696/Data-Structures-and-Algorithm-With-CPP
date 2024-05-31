
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;

    v.push_back(9);
    v.push_back(4);
    v.push_back(6);
    v.push_back(8);
    v.push_back(10);
    v.push_back(9);
    v.push_back(4);
    v.push_back(6);
    v.push_back(8);
    v.push_back(10);
    cout <<"Size-"<< v.size() << endl;
    cout <<"Capacity-"<< v.capacity() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    v.pop_back();
    v.pop_back();
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    cout <<"Size-"<< v.size() << endl;
    cout <<"Capacity-"<< v.capacity() << endl;

    return 0;
}
/*
Size-10
Capacity-16
9 4 6 8 10 9 4 6 8 10
9 4 6 8 10 9 4 6
Size-8
Capacity-16
jotbar pop back korbo toto ta element sesher dik theke delete hobe and size automatic adjust hote thakbe
but capacity change hobe na
*/