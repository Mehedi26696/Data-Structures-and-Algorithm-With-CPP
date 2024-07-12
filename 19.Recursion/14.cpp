// Reverse a string

#include <bits/stdc++.h>
using namespace std;
void rev(string &s, int st, int en)
{
    //recursion clarity:
    cout<<s<<endl;
    // base case
    if (st > en)
    {
        return;
    }

    char t = s[st];
    s[st] = s[en];
    s[en] = t;

    rev(s, st + 1, en - 1);
}
int main()
{
    string s;
    cin >> s;
    rev(s, 0, s.length() - 1);
    cout << s << endl;
    return 0;
}