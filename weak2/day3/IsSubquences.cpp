#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    string s, t;
    cout << "enter the string: " << endl;
    cin >> s >> t;
    int a = 0;
    if (s.empty())
        return true;
    for (int i = 0; i < t.length(); i++)
    {
        if (t[i] == s[a])
        {
            a++;
        }
        if (a >= s.length())
        {
            cout << true;
            return 0;
        }
    }
    cout << false;
}