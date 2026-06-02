#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> prices;
    int n;
    cout << "enter the no of element ";
    cin >> n;
    cout << "enter the element ";
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        prices.push_back(a);
    }
    int j = 0;
    int max1 = 0;
    for (int i = 1; i < prices.size(); i++)
    {
        int sum = prices[i] - prices[j];
        if (sum < 0)
        {
            j = i;
        }
        else
        {
            max1 = max(max1, sum);
        }
    }
    cout << max1 << endl;
}