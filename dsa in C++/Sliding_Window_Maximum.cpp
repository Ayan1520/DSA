// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     int nums[] = {1};
//     vector<int> ans;
//     int k = 1;
//     int l = 0;
//     int r = k;
//     int n = sizeof(nums) / sizeof(nums[0]);
//     while (r <= n)
//     {
//         int maxi = nums[l];
//         for (int i = l; i < r; i++)
//         {
//             maxi = max(nums[i], maxi);
//         }
//         ans.push_back(maxi);
//         maxi = 0;
//         l++;
//         r++;
//     }
//     for (int i = 0; i < ans.size(); i++)
//     {
//         cout << ans[i] << " ";
//     }
//     return 0;
// }

#include <iostream>
#include <deque>
#include <vector>
using namespace std;

int main()
{
    int nums = {1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;
    deque<int> d;
    int l = 0;
    int r = k;
    int n = sizeof(nums) / sizeof(nums[0]);
    vector<int> ans;
    int k = 1;
    int l = 0;
    int r = k;
    int n = sizeof(nums) / sizeof(nums[0]);
    while (r < n)
    {
        while (d.empty() ||)
    }
    return 0;
}