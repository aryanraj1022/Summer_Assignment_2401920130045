#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main()
{
    vector<int> heights;
    int n;
    cout << "enter the no of element ";
    cin >> n;
    cout << "enter the element ";
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        heights.push_back(a);
    }
    stack<int> st;
    int ans = 0;

    for (int i = 0; i <= n; i++)
    {
        int curr = (i == n ? 0 : heights[i]);

        while (!st.empty() && heights[st.top()] > curr)
        {
            int h = heights[st.top()];
            st.pop();

            int right = i;
            int left = st.empty() ? -1 : st.top();

            int width = right - left - 1;
            ans = max(ans, h * width);
        }

        st.push(i);
    }

    cout << ans << endl;
}