#include <iostream>
#include <vector>
#include <deque>
#include <climits>
using namespace std;
int rotten_orange(vector<vector<int>> &grid)
{
    int m = grid.size();
    int n = grid[0].size();
    deque<pair<pair<int, int>, int>> dq;
    vector<vector<bool>> vis(m, vector<bool>(n, false));
    int ans = INT_MIN;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (grid[i][j] == 2)
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
        int t = dq.front().second;
        ans = max(ans, t);
        dq.pop_front();
        if (i - 1 >= 0 && !vis[i - 1][j] && grid[i - 1][j] == 1)
        {
            dq.push_back({{i - 1, j}, t + 1}); // up
            vis[i - 1][j] = true;
        }
        if (i + 1 < m && !vis[i + 1][j] && grid[i + 1][j] == 1)
        {
            dq.push_back({{i + 1, j}, t + 1}); // down
            vis[i + 1][j] = true;
        }
        if (j - 1 >= 0 && !vis[i][j - 1] && grid[i][j - 1] == 1)
        {
            dq.push_back({{i, j - 1}, t + 1}); // left
            vis[i][j - 1] = true;
        }
        if (j + 1 < n && !vis[i][j + 1] && grid[i][j + 1] == 1)
        {
            dq.push_back({{i, j + 1}, t + 1}); // right
            vis[i][j + 1] = true;
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (grid[i][j] == 1 && !vis[i][j])
            {
                return -1;
            }
        }
    }
    return ans;
}
int main()
{
    vector<vector<int>> ans;
    ans = {{2, 1, 1}, {1, 1, 0}, {0, 1, 1}};
    cout << rotten_orange(ans) << endl;
    return 0;
}