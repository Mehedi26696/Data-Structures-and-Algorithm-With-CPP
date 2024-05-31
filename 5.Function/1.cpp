// startriangle
#include <iostream>
using namespace std;
void startriangle(int a)
{
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout<<endl;
    }
}
int main()
{
    int a;
    cin >> a;
    startriangle(a);
    return 0;
}