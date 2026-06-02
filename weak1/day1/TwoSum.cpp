#include <iostream>
#include <vector>
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
    cout << "enter the target ";
    int target;
    cin >> target;
    int count = 0;
    int i = 0;
    int j;
    vector<int> ans;
    for (i = 0; i < nums.size(); i++)
    {
        if (count > 0)
        {
            break;
        }
        for (j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] + nums[j] == target)
            {
                count++;
                break;
            }
        }
    }
    cout << i - 1 << " " << j << endl;
}