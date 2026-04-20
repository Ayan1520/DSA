#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int len = 0;
        bool flag = false;
        for (int i = 1; i <= 9999; i++)
        {
            int curr = 0;
            for (int j = 1; j <= 4; j++)
            {
                len += j;
                curr = curr * 10 + i;
                if (n == curr)
                {
                    flag = true;
                    break;
                }
            }
            if (flag)
            {
                cout << len << endl;
                break;
            }
        }
    }
    return 0;
}