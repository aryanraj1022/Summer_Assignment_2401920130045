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
    int k;
    cout << "enter the length you want find max avg: " << endl;
    cin >> k;
    double sum = 0;
    double max1 = INT_MIN;
    for (int i = 0; i < k; i++)
    {
        sum = sum + nums[i];
    }
    max1 = max(max1, (sum / k));
    int j = 0;
    for (int i = k; i < nums.size(); i++)
    {
        sum = sum + nums[i] - nums[j];
        max1 = max(max1, (sum / k));
        j++;
    }
    cout<< max1 <<endl;
}