#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <unordered_set>
using namespace std;
vector<vector<string>> wordladder(vector<string> &word, string start, string end)
{
    deque<vector<string>> dq;
    unordered_set<string> s(word.begin(), word.end());
    dq.push_back({start});
    vector<string> usedonlevel;
    vector<vector<string>> ans;
    int level = 1;
    s.erase(start);
    while (dq.size() > 0)
    {
        vector<string> vec = dq.front();
        dq.pop_front();
        if (vec.size() > level)
        {
            for (auto it : usedonlevel)
            {
                s.erase(it);
            }
            usedonlevel.clear();
            level = vec.size();
        }
        string currword = vec.back();
        if (currword == end)
        {
            if (ans.size() == 0)
            {
                ans.push_back(vec);
            }
            else if (ans[0].size() == vec.size())
            {
                ans.push_back(vec);
            }
        }
        for (int i = 0; i < currword.size(); i++)
        {
            char original = currword[i];
            for (char c = 'a'; c <= 'z'; c++)
            {
                currword[i] = c;
                if (s.count(currword) > 0)
                {
                    vec.push_back(currword);
                    dq.push_back(vec);
                    usedonlevel.push_back(currword);
                    vec.pop_back();
                }
            }
            currword[i] = original;
        }
    }
    return ans;
}
int main()
{
    vector<string> wordslist;
    wordslist = {"hot", "dot", "dog", "lot", "log", "cog"};
    vector<vector<string>> ans = wordladder(wordslist, "hit", "cog");
    for (int i = 0; i < ans.size(); i++)
    {
        for (auto &w : ans[i])
        {
            cout << w << " ";
        }
        cout << endl;
    }
    return 0;
}
