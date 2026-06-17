#include <iostream>
#include <string>
#include <stack>
using namespace std;
bool isValid(string s)
{
    string a;
    stack<char> stc;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            stc.push(s[i]);
        }
        else
        {
            if (stc.empty())
            {
                return false;
            }
            if ((stc.top() == '(' && s[i] == ')') || (stc.top() == '[' && s[i] == ']') || (stc.top() == '{' && s[i] == '}'))
            {
                stc.pop();
            }
            else
            {
                return false;
            }
        }
    }
    if (stc.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    string s;
    cout << "enter the string of parenthesis: ";
    cin >> s;
    cout<<isValid(s)<<endl;
}