// Given an array of marks of students,if the marks is less than 35 print roll of students,roll is arrays index here
// suppose students is n

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int marks[n];
    for (int i = 0; i < n; i++)
    {
        cin >> marks[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (marks[i] < 35)
        {
            cout << i << endl;
        }
    }

    return 0;
}