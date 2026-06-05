#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    cout << "enter no of string";
    int n;
    cin >> n;
    vector<string> strs;
    cout << "enter strings";
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        strs.push_back(s);
    }
    string s;
    for (int i = 0; i < strs[0].size(); i++)
    {
        char c = strs[0][i];

        for (int j = 1; j < strs.size(); j++)
        {
            if (i >= strs[j].size() || strs[j][i] != c)
            {
                s = strs[0].substr(0, i);
                break;
            }
            s = strs[0];
        }
    }
    cout << s << endl;
}