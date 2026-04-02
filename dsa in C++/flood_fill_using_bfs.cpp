#include <iostream>
#include <vector>
#include <deque>
using namespace std;
void bfs(vector<vector<int>> &grid, int sr, int sc, int original_color, int new_color, vector<vector<bool>> &vis)
{
    int m = grid.size();
    int n = grid[0].size();
    deque<pair<int, int>> dq;
    dq.push_back({sr, sc});
    vis[sr][sc] = true;
    while (dq.size() > 0)
    {
        int i = dq.front().first;
        int j = dq.front().second;
        dq.pop_front();
        grid[i][j] = new_color;
        if (i - 1 >= 0 && !vis[i - 1][j] && grid[i - 1][j] == original_color)
        {
            dq.push_back({i - 1, j});
            vis[i - 1][j] = true;
        }
        if (i + 1 < m && !vis[i + 1][j] && grid[i + 1][j] == original_color)
        {
            dq.push_back({i + 1, j});
            vis[i + 1][j] = true;
        }
        if (j - 1 >= 0 && !vis[i][j - 1] && grid[i][j - 1] == original_color)
        {
            dq.push_back({i, j - 1});
            vis[i][j - 1] = true;
        }
        if (j + 1 < n && !vis[i][j + 1] && grid[i][j + 1] == original_color)
        {
            dq.push_back({i, j + 1});
            vis[i][j + 1] = true;
        }
    }
}
void flood_fill(vector<vector<int>> &grid, int sr, int sc, int original_color, int new_color)
{
    int m = grid.size();
    int n = grid[0].size();
    vector<vector<bool>> vis(m, vector<bool>(n, false));
    bfs(grid, sr, sc, original_color, new_color, vis);
}
int main()
{
    vector<vector<int>> ans;
    ans = {{1, 1, 1}, {1, 1, 0}, {1, 0, 1}};
    flood_fill(ans, 1, 1, 1, 2);
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