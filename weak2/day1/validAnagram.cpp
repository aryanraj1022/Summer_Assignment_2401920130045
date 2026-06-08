#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    string s, t;
    cout << "enter the string: " << endl;
    cin >> s >> t;
    if (s.length() != t.length())
    {
        return false;
    }
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != t[i])
        {
            cout << false << endl;
            return 0;
        }
    }
    cout << true << endl;
}