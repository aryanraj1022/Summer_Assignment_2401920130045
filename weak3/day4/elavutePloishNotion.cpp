#include <iostream>
#include <vector>
#include <stack>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> tokens;
    int n;
    cout << "enter the no of element ";
    cin >> n;
    cout << "enter the element ";
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        tokens.push_back(a);
    }
    stack<int> a;
    for(auto it:tokens)
        {
            if(it=='+')
            {
                int x=a.top();
                a.pop();
                int y=a.top();
                a.pop();
                a.push(y+x);
                continue;

            }
            else if(it=='-')
            {
                int x=a.top();
                a.pop();
                int y=a.top();
                a.pop();
                a.push(y-x);
                continue;
            }
            else if(it=='*')
            {
                int x=a.top();
                a.pop();
                int y=a.top();
                a.pop();
                a.push(y*x);
                continue;

            }
            else if(it=='/')
            {
                int x=a.top();
                a.pop();
                int y=a.top();
                a.pop();
                a.push(y/x);
                continue;

            }
            string l;
            l.push_back(it);
            a.push(stoi(l));
        }
        cout<<a.top()<<endl;
}