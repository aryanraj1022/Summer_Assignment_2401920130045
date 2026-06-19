#include <iostream>
#include <vector>
#include<stack>
#include<algorithm>
using namespace std;
vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
{
    vector<int> a;
    stack<int> l;
    for (int i = nums2.size() - 1; i >= 0; i--)
    {
        if (l.empty())
        {
            l.push(nums2[i]);
            a.push_back(-1);
        }
        else
        {
            while (!l.empty() && l.top() < nums2[i])
            {

                l.pop();
            }
            if (l.empty())
            {
                a.push_back(-1);
                l.push(nums2[i]);
            }
            else
            {
                a.push_back(l.top());
                l.push(nums2[i]);
            }
        }
    }
    reverse(a.begin(), a.end());

    for (int i = 0; i < nums1.size(); i++)
    {
        auto it = find(nums2.begin(), nums2.end(), nums1[i]);
        int ind = distance(nums2.begin(), it);

        nums1[i] = a[ind];
    }
    return nums1;
}
int main()
{
    vector<int> x, y;
    int n, m;
    cout << "enter the no of element ";
    cin >> n;
    cout << "enter the element ";
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        x.push_back(a);
    }
    cout << "enter the no of element ";
    cin >> m;
    cout << "enter the element ";
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        y.push_back(a);
    }
    vector<int> ans =nextGreaterElement(x,y);
    for(int a:ans){
        cout<<a<<endl;
    }
}