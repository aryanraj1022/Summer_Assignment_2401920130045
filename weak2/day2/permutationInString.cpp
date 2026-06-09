#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int main()
{
    string s1, s2;
    cout << "enter the string: " << endl;
    cin >> s1 >> s2;
    bool x = false;
    vector<int> mp(26, 0), a(26, 0);
    if (s1.length() > s2.length())
        return false;

    for (int i = 0; i < s1.size(); i++)
    {
        mp[int(s1[i] - 'a')]++;
    }

    for (int i = 0; i < s1.length(); i++)
    {
        a[int(s2[i] - 'a')]++;
    }
    if (a == mp)
        return true;
    int j = 0;
    for (int i = s1.length(); i < s2.length(); i++)
    {
        a[int(s2[j] - 'a')]--;
        a[int(s2[i] - 'a')]++;
        if (mp == a)
        {
            x = true;
            break;
        }
        j++;
    }

    cout<<x<<endl;
}