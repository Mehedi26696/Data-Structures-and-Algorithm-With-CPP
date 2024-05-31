
// size of vector

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;

    v.push_back(9);
    cout << v.size() << endl;

    v.push_back(4);

    cout << v.size() << endl;

    v.push_back(6);

    cout << v.size() << endl;

    v.push_back(8);

    cout << v.size() << endl;

    v.push_back(10);

    cout << v.size() << endl;

    return 0;
}