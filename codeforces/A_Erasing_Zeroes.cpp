#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        int i = 0;
        while (i < n && s[i] != '1')
        {
            i++;
        }
        i++;
        int cnt = 0;
        while (i < n && s[i] == '0')
        {
            cnt++;
            i++;
        }
        if (i == n)
        {
            cout << 0;
            continue;
        }
        cout << cnt << endl;
    }

    return 0;
}