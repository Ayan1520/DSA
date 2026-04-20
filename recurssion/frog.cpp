#include <bits/stdc++.h>
#include <vector>
using namespace std;
int slove(int i, int n, vector<int> &nums)
{
    if (i == n - 1)
        return 0;
    int one_step = abs(nums[i] - nums[i + 1]) + slove(i + 1, n, nums);
    int two_step = INT_MAX;
    if (i + 2 < n)
    {
        int two_step = abs(nums[i] - nums[i + 2]) + slove(i + 2, n, nums);
    }
    return min(one_step, two_step);
}
int main()
{
    int t;
    cin >> t;
    vector<int> nums;
    for (int i = 0; i < t; i++)
    {
        cin >> nums[i];
    }
    int ans = slove(0, t, nums);
    cout << ans;

    return 0;
}