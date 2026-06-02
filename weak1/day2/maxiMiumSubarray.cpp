#include <iostream>
#include <vector>
#include <climits>
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
    int max1 = nums[0];
    int sum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        sum = sum + nums[i];
        if (sum < 0)
        {
            sum = 0;
        }
        if (sum == 0)
        {
            max1 = max(max1, nums[i]);
            continue;
        }
        max1 = max(max1, sum);
    }
    cout << max1 << endl;
}