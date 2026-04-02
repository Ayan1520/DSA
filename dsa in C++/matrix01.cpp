#include <iostream>
#include <vector>
#include <deque>
using namespace std;
void grid(vector<vector<int>> &matrix, vector<vector<bool>> &vis, vector<vector<int>> &dis)
{
    deque<pair<pair<int, int>, int>> dq;
    int m = matrix.size();
    int n = matrix[0].size();
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] == 1)
            {
                dq.push_back({{i, j}, 0});
                vis[i][j] = true;
            }
        }
    }
    while (dq.size() > 0)
    {
        int i = dq.front().first.first;
        int j = dq.front().first.second;
        int d = dq.front().second;
        dq.pop_front();
        dis[i][j] = d;
        if (i - 1 >= 0 && !vis[i - 1][j])
        {
            dq.push_back({{i - 1, j}, d + 1});
            vis[i - 1][j] = true; // top
        }
        if (i + 1 < m && !vis[i + 1][j])
        {
            dq.push_back({{i + 1, j}, d + 1});
            vis[i + 1][j] = true; // down
        }
        if (j - 1 >= 0 && !vis[i][j - 1])
        {
            dq.push_back({{i, j - 1}, d + 1});
            vis[i][j - 1] = true; // left
        }
        if (j + 1 < n && !vis[i][j + 1])
        {
            dq.push_back({{i, j + 1}, d + 1});
            vis[i][j + 1] = true; // right
        }
    }
}
vector<vector<int>> solve(vector<vector<int>> &matrix)
{
    int m = matrix.size();
    int n = matrix[0].size();
    vector<vector<bool>> vis(m, vector<bool>(n, false));
    vector<vector<int>> dis(m, vector<int>(n, 0));
    grid(matrix, vis, dis);
    return dis;
}
int main()
{
    vector<vector<int>> matrix;
    matrix = {{0, 0, 0}, {0, 1, 0}, {1, 0, 1}};
    vector<vector<int>> ans = solve(matrix);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[0].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
