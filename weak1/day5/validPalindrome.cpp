#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout << "enter the string ";
    string s;
    cin >> s;
    string str;
    if (s.length() == 0)
        return true;
    for (int i = 0; i < s.length(); i++)
    {
        char a = s[i];
        if ((int(a) <= 122 && int(a) >= 97) || (int(a) >= 65 && int(a) <= 90) || (int(a) <= 57 && int(a) >= 48))
        {
            a = tolower(a);
            str.push_back(a);
        }
    }
    int j = str.length() - 1;
    bool l = true;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != str[j])
        {
            l = false;
            break;
        }
        j--;
    }

    cout << l << endl;
}