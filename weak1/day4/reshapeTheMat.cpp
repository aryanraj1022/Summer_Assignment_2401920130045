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
    cout << "Enter the reshape row and column" << endl;
    int r, c;
    cin >> r >> c;
    vector<vector<int>> a(r, vector<int>(c, 0));
    if ((n * m) == (r * c))
    {
        int x = 0, y = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (y < c)
                {
                    a[x][y] = mat[i][j];
                    y++;
                }
                else
                {
                    x++;
                    y = 0;
                    a[x][y] = mat[i][j];
                    y++;
                }
            }
        }
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
}