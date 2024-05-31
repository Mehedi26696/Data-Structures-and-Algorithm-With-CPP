// vowel and consonant check

#include <iostream>
using namespace std;
int main()
{
    char ch;
    cin >> ch;
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        if (ch == 'A' || ch == 'a' || ch == 'E' || ch == 'e' || ch == 'I' || ch == 'i' || ch == 'O' || ch == 'o' || ch == 'U' || ch == 'u')
        {
            cout << "Vowel";
        }
        else
        {
            cout << "Consonant";
        }
    }
    else
    {
        cout << "It is not a alphabet";
    }

    return 0;
}