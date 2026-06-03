#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main()
{
    vector<int> height;
    int n;
    cout << "enter the no of element ";
    cin >> n;
    cout << "enter the element ";
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        height.push_back(a);
    }
    int count = height.size() - 1;
    int max = INT_MIN;
    int i = 0;
    int j = height.size() - 1;
    while (i < j)
    {
        int vol;
        if (height[i] < height[j])
        {
            vol = height[i] * count;
            if (vol > max)
            {
                max = vol;
            }
            i++;
            count--;
        }
        else
        {
            vol = height[j] * count;
            if (vol > max)
            {
                max = vol;
            }
            j--;
            count--;
        }
    }
    cout << max << endl;
}