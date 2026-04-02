#include <iostream>
#include <vector>
#include <deque>
#include <list>
using namespace std;
class Graph
{
    int V;
    list<int> *l;

public:
    Graph(int v)
    {
        this->V = v;
        l = new list<int>[V];
    }
    void adj(int v, int u)
    {
        l[u].push_back(v);
        l[v].push_back(u);
    }
    bool bfs(int src, vector<bool> &vis)
    {
        deque<pair<int, int>> dq;
        dq.push_back({src, -1});
        vis[src] = true;
        while (dq.size() > 0)
        {
            int node = dq.front().first;
            int parent = dq.front().second;
            dq.pop_front();
            for (int neigh : l[node])
            {
                if (!vis[neigh])
                {
                    dq.push_back({neigh, node});
                    vis[neigh] = true;
                }
                else if (parent != neigh)
                    return true;
            }
        }
        return false;
    }
    bool detect_cycle(int src)
    {
        vector<bool> vis(V, false);
        return bfs(src, vis);
    }
};
int main()
{
    Graph g(6);
    g.adj(1, 2);
    g.adj(2, 3);
    g.adj(3, 4);
    g.adj(4, 5);
    cout << boolalpha << g.detect_cycle(1) << endl;
    return 0;
}