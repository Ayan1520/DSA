#include <iostream>
#include <vector>
using namespace std;
void dfs(int i, int j, vector<vector<char>> &matrix, vector<vector<int>> &vis)
{
    int m = matrix.size();
    int n = matrix[0].size();
    vis[i][j] = 1;
    // left
    if (i - 1 >= 0 && matrix[i - 1][j] == 'o' && vis[i - 1][j] == 0)
    {
        dfs(i - 1, j, matrix, vis);
    }
    // right
    if (i + 1 > m && matrix[i + 1][j] == 'o' && vis[i + 1][j] == 0)
    {
        dfs(i + 1, j, matrix, vis);
    }
    // down
    if (j + 1 < n && matrix[i][j - 1] == 'o' && vis[i][j + 1] == 0)
    {
        dfs(i, j + 1, matrix, vis);
    }
    // up
    if (j - 1 >= 0 && matrix[i][j - 1] == 'o' && vis[i][j - 1] == 0)
    {
        dfs(i, j - 1, matrix, vis);
    }
}
void ans(vector<vector<char>> &matrix)
{
    int m = matrix.size();
    int n = matrix[0].size();
    vector<vector<int>> vis(m, vector<int>(n, 0));
    // for row
    for (int j = 0; j < n; j++)
    {
        if (matrix[0][j] == 'o' && vis[0][j] == 0)
        {
            dfs(0, j, matrix, vis);
        }
        if (matrix[m - 1][j] == 'o' && vis[m - 1][j] == 0)
        {
            dfs(m - 1, j, matrix, vis);
        }
    }
    for (int i = 0; i < m; i++)
    {
        if (matrix[i][0] == 'o' && vis[i][0] == 0)
        {
            dfs(i, 0, matrix, vis);
        }
        if (matrix[i][n - 1] == 'o' && vis[i][n - 1] == 0)
        {
            dfs(i, n - 1, matrix, vis);
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (vis[i][j] == 0 && matrix[i][j] == 'o')
            {
                matrix[i][j] = 'x';
            }
        }
    }
}
int main()
{
    vector<vector<char>> matrix;
    matrix = {{'x', 'x', 'x', 'x'},
              {'x', 'o', 'o', 'x'},
              {'x', 'x', 'o', 'x'},
              {'x', 'o', 'x', 'o'},
              {'o', 'o', 'x', 'x'}};
    ans(matrix);
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[0].size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}