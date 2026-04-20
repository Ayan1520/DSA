#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    int lvl = 0;
    int curr = 0;
    while (true)
    {
        curr = (lvl + 1) * (lvl + 1 + 1) / 2;
        t -= curr;
        if (t >= 0)
            lvl++;
        else
            break;
    }

    cout << lvl;

    return 0;
}