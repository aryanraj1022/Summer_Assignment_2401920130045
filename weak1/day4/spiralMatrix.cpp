#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, m;
    cout << "enter the no of row and column" << endl;
    cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(m, 0));
    cout << "enter the element in matrix" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }
    vector<int> ans;
    int top = 0, bottom = m - 1;
    int left = 0, right = n - 1;

    while (top <= bottom && left <= right)
    {

        for (int j = left; j <= right; j++)
        {
            ans.push_back(matrix[top][j]);
        }
        top++;

        for (int i = top; i <= bottom; i++)
        {
            ans.push_back(matrix[i][right]);
        }
        right--;

        if (top <= bottom)
        {
            for (int j = right; j >= left; j--)
            {

                ans.push_back(matrix[bottom][j]);
            }
            bottom--;
        }

        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                ans.push_back(matrix[i][left]);
            }
            left++;
        }
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}