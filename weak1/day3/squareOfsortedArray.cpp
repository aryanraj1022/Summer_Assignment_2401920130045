#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> nums;
    int n;
    cout << "enter the no of element ";
    cin >> n;
    cout << "enter the element ";
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        nums.push_back(a);
    }
    vector<int> a;
    int count = 0;
    vector<int> ans;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] < 0)
        {
            a.insert(a.begin(), nums[i] * nums[i]);
            count++;
        }
        else
        {
            nums[i] = nums[i] * nums[i];
        }
    }
    int i = 0;
    int j = count;
    while (i < a.size() && j < nums.size())
    {
        if (a[i] > nums[j])
        {
            ans.push_back(nums[j]);
            j++;
        }
        else
        {
            ans.push_back(a[i]);
            i++;
        }
    }
    while (i < a.size())
    {
        ans.push_back(a[i]);
        i++;
    }
    while (j < nums.size())
    {
        ans.push_back(nums[j]);
        j++;
    }
     for(int ans: nums){
        cout<<ans<<" ";
    }
}