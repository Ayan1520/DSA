#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <unordered_set>
using namespace std;
int wordladder(vector<string> &word, string start, string end)
{
    deque<pair<string, int>> dq;
    unordered_set<string> s(word.begin(), word.end());
    int level = 0;
    dq.push_back({start, level});
    while (dq.size() > 0)
    {
        string currword = dq.front().first;
        int l = dq.front().second;
        dq.pop_front();
        if (currword == end)
        {
            return l;
        }
        for (int i = 0; i < currword.size(); i++)
        {
            char original = currword[i];
            for (char c = 'a'; c <= 'z'; c++)
            {
                currword[i] = c;
                if (s.find(currword) != s.end())
                {
                    s.erase(currword);
                    dq.push_back({currword, l + 1});
                }
            }
            currword[i] = original;
        }
    }
    return 0;
}
int main()
{
    vector<string> wordslist;
    wordslist = {"hot", "dot", "dog", "lot", "log", "cog"};
    int ans = wordladder(wordslist, "hit", "cog");
    cout << ans << endl;
    return 0;
}
