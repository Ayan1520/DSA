#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int height[] = {4, 2, 0, 3, 2, 5};
    int n = sizeof(height) / sizeof(height[0]);
    vector<int> lmax(n, 0);
    vector<int> rmax(n, 0);
    lmax[0] = height[0];
    for (int i = 1; i < n; i++)
    {
        lmax[i] = max(height[i], lmax[i - 1]);
    }
    rmax[n - 1] = height[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        rmax[i] = max(height[i], rmax[i + 1]);
    }
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        int e = min(lmax[i], rmax[i]);
        total += e - height[i];
    }
    cout << total << " ";
    return 0;
}