#include <iostream>
#include <vector>
#include <set>
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
    set<int> mySet;
    for (int i = 0; i < nums.size(); i++)
    {
        mySet.insert(nums[i]);
    }
    nums.clear();
    for (int ans : mySet)
    {
        nums.push_back(ans);
        cout<<ans<<" ";
    }
    cout<<mySet.size()<<endl;
}