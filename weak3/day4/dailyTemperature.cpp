#include <iostream>
#include <vector>
#include <stack>
using namespace std;
class Node
{
public:
    int val;
    int ind;
    Node(int x, int y)
    {
        val = x;
        ind = y;
    }
};
int main()
{
    vector<int> temperatures;
    int n;
    cout << "enter the no of element ";
    cin >> n;
    cout << "enter the element ";
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        temperatures.push_back(a);
    }
    stack<Node *> a;
    vector<int> ans(temperatures.size(), 0);
    for (int i = temperatures.size() - 1; i >= 0; i--)
    {
        if (a.empty())
        {
            Node *newNode = new Node(temperatures[i], i);
            a.push(newNode);
            ans[i] = 0;
        }
        else
        {
            while (!a.empty() && temperatures[i] >= a.top()->val)
            {
                a.pop();
            }
            if (a.empty())
            {
                Node *newNode = new Node(temperatures[i], i);
                a.push(newNode);
                ans[i] = 0;
            }
            else
            {
                ans[i] = a.top()->ind - i;
                Node *newNode = new Node(temperatures[i], i);
                a.push(newNode);
            }
        }
    }
    for(int i:ans){
        cout<<i<<endl;
    }
}