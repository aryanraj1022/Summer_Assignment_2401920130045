#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;
int main()
{
    int n;
    cout << "enter the number of string input:";
    cin >> n;
    vector<string> strs;
    cout << "enter the string: ";
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        strs.push_back(s);
    }
    map<vector<int>, vector<string>> mp;
    for (auto it : strs)
    {
        vector<int> x(26, 0);
        for (int i = 0; i < it.length(); i++)
        {
            x[int(it[i]) - int('a')]++;
        }
        if (mp.find(x) == mp.end())
        {
            vector<string> n = {it};
            mp[x] = n;
        }
        else
        {
            mp[x].push_back(it);
        }
        x.clear();
    }
    vector<vector<string>> ans;
    for (auto it : mp)
    {
        ans.push_back(it.second);
        for (int i = 0; i < it.second.size(); i++)
        {
            cout << it.second[i] << " ";
        }
        cout << endl;
    }
}