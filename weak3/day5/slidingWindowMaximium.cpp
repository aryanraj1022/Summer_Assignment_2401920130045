#include <iostream>
#include <vector>
#include<unordered_map>
#include<set>
using namespace std;
vector<int> maxSlidingWindow(vector<int> &nums, int k)
{
    set<int> a;
    unordered_map<int, int> mp;
    mp;
    int j = 0;
    for (int i = 0; i < k; i++)
    {
        a.insert(nums[i]);
        mp[nums[i]]++;
        j++;
    }
    vector<int> ans;
    auto it = a.end();
    it--;
    ans.push_back(*it);
    int l = 0;
    for (int i = j; i < nums.size(); i++)
    {
        if (mp[nums[l]] <= 1)
        {
            a.erase(nums[l]);
            if (a.find(nums[i]) == a.end())
            {
                a.insert(nums[i]);
            }
            mp[nums[l]]--;
            mp[nums[i]]++;
        }
        else
        {
            mp[nums[l]]--;
            mp[nums[i]]++;
            if (a.find(nums[i]) == a.end())
            {
                a.insert(nums[i]);
            }
        }
        it = a.end();
        it--;
        ans.push_back(*it);
        l++;
    }
    return ans;
}
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
    int k;
    cout << "enter the value of k";
    cin >> k;
    vector<int>ans=maxSlidingWindow(nums,k);
    for(int a:ans){
        cout<<a<<" ";
    }
    cout<<endl;
}