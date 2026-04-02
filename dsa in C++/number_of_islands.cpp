#include <iostream>
#include <vector>
#include <deque>
using namespace std;
// void dfs(int i, int j, vector<vector<int>> &vis, vector<vector<int>> &matrix)
// {
//     int m = matrix.size();
//     int n = matrix[0].size();
//     vis[i][j] = 1;
//     if (i - 1 >= 0 && matrix[i - 1][j] == 1 && vis[i - 1][j] == 0)
//     {
//         dfs(i - 1, j, vis, matrix); // up
//     }
//     if (i + 1 < m && matrix[i + 1][j] == 1 && vis[i + 1][j] == 0)
//     {
//         dfs(i + 1, j, vis, matrix); // down
//     }
//     if (j - 1 >= 0 && matrix[i][j - 1] == 1 && vis[i][j - 1] == 0)
//     {
//         dfs(i, j - 1, vis, matrix); // left
//     }
//     if (j + 1 < n && matrix[i][j + 1] == 1 && vis[i][j + 1] == 0)
//     {
//         dfs(i, j + 1, vis, matrix); // right
//     }
// }
// int island(vector<vector<int>> &matrix)
// {
//     int m = matrix.size();
//     int n = matrix[0].size();
//     vector<vector<int>> vis(m, vector<int>(n, 0));
//     int cnt = 0;
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (matrix[i][j] == 1 && vis[i][j] == 0)
//             {
//                 dfs(i, j, vis, matrix);
//                 cnt += 1;
//             }
//         }
//     }
//     return cnt;
// }
void bfs(int i, int j, vector<vector<int>> &matrix, vector<vector<int>> &vis)
{
    int m = matrix.size();
    int n = matrix[0].size();
    deque<pair<int, int>> dq;
    dq.push_back({i, j});
    vis[i][j] = 1;
    while (dq.size() > 0)
    {
        int row = dq.front().first;
        int cols = dq.front().second;
        dq.pop_front();
        for (int i = -1; i <= 1; i++)
        {
            for (int j = -1; j <= 1; j++)
            {
                int r = row + i;
                int c = cols + j;
                if (r >= 0 && c >= 0 && r < m && c < n && matrix[r][c] == 1 && vis[r][c] == 0)
                {
                    dq.push_back({r, c});
                    vis[r][c] = 1;
                }
            }
        }
    }
}
int island(vector<vector<int>> &matrix)
{
    int m = matrix.size();
    int n = matrix[0].size();
    int cnt = 0;
    vector<vector<int>> vis(m, vector<int>(n, 0));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] == 1 && vis[i][j] == 0)
            {
                cnt += 1;
                bfs(i, j, matrix, vis);
            }
        }
    }
    return cnt;
}
int main()
{
    vector<vector<int>> matrix;
    matrix = {{1, 1, 0, 0, 1},
              {1, 1, 0, 1, 0},
              {1, 0, 1, 0, 0},
              {0, 0, 0, 1, 1},
              {0, 0, 0, 0, 1}};
    int ans = island(matrix);
    cout << ans << endl;
}