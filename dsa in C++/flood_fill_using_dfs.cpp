#include <iostream>
#include <vector>
using namespace std;
void dfs(vector<vector<int>> &img, int i, int j, int new_color, int original_color)
{
    if (i < 0 || j < 0 || i >= img.size() || j >= img[0].size() || img[i][j] != original_color || img[i][j] == new_color)
    {
        return;
    }
    img[i][j] = new_color;
    dfs(img, i - 1, j, new_color, original_color); // top
    dfs(img, i + 1, j, new_color, original_color); // bottom
    dfs(img, i, j - 1, new_color, original_color); // left
    dfs(img, i, j + 1, new_color, original_color); // right
}
void flood(vector<vector<int>> &img, int sr, int sc, int color, int intial_color)
{
    dfs(img, sr, sc, color, intial_color);
}
int main()
{
    vector<vector<int>> ans;
    ans = {{1, 1, 1}, {1, 1, 0}, {1, 0, 1}};
    flood(ans, 1, 1, 2, 1);
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