#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
int main()
{
    cout << "ente the string ";
    string s;
    cin >> s;
    unordered_map<char, int> mp;
    for (int i = 0; i < s.length(); i++)
    {
        if (mp.find(s[i]) == mp.end())
        {
            mp[s[i]] = 1;
        }
        else
        {
            mp[s[i]]++;
        }
    }
    for (int i = 0; i < s.length(); i++)
    {
        if (mp[s[i]] == 1)
        {
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    ;
}
