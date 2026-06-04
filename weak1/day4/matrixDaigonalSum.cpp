#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, m;
    cout << "enter the no of row and column" << endl;
    cin >> n >> m;
    vector<vector<int>> mat(n, vector<int>(m, 0));
    cout << "enter the element in matrix" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }
    n = mat.size() - 1;
    int sum = 0;
    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat.size(); j++)
        {
            if (i == j || i + j == n)
            {
                sum = sum + mat[i][j];
            }
        }
    }
    cout<<sum<<endl;
}
