#include <iostream>
#include <vector>
using namespace std;
void dfs(int i, int j, vector<vector<int>> &matrix, vector<vector<int>> &vis)
{
    int m = matrix.size();
    int n = matrix[0].size();
    vis[i][j] = 1;
    // left
    if (i - 1 >= 0 && matrix[i - 1][j] == 1 && vis[i - 1][j] == 0)
    {
        dfs(i - 1, j, matrix, vis);
    }
    // right
    if (i + 1 < m && matrix[i + 1][j] == 1 && vis[i + 1][j] == 0)
    {
        dfs(i + 1, j, matrix, vis);
    }
    // down
    if (j + 1 < n && matrix[i][j + 1] == 1 && vis[i][j + 1] == 0)
    {
        dfs(i, j + 1, matrix, vis);
    }
    // up
    if (j - 1 >= 0 && matrix[i][j - 1] == 1 && vis[i][j - 1] == 0)
    {
        dfs(i, j - 1, matrix, vis);
    }
}
int ans(vector<vector<int>> &matrix)
{
    int m = matrix.size();
    int n = matrix[0].size();
    vector<vector<int>> vis(m, vector<int>(n, 0));
    // for row
    for (int j = 0; j < n; j++)
    {
        if (matrix[0][j] == 1 && vis[0][j] == 0)
        {
            dfs(0, j, matrix, vis);
        }
        if (matrix[m - 1][j] == 1 && vis[m - 1][j] == 0)
        {
            dfs(m - 1, j, matrix, vis);
        }
    }
    for (int i = 0; i < m; i++)
    {
        if (matrix[i][0] == 1 && vis[i][0] == 0)
        {
            dfs(i, 0, matrix, vis);
        }
        if (matrix[i][n - 1] == 1 && vis[i][n - 1] == 0)
        {
            dfs(i, n - 1, matrix, vis);
        }
    }
    int count = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (vis[i][j] == 0 && matrix[i][j] == 1)
            {
                count += 1;
            }
        }
    }
    return count;
}
int main()
{
    vector<vector<int>> matrix;
    matrix = {{0, 1, 0, 0, 0},
              {0, 0, 1, 1, 0},
              {0, 0, 1, 1, 0},
              {1, 0, 1, 0, 1},
              {0, 0, 0, 1, 0}};
    int cnt = ans(matrix);
    cout << cnt << endl;
}