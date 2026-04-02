#include <iostream>
#include <list>
#include <queue>
#include <deque>
using namespace std;
class Graph
{
    int V;
    list<int> *l;

public:
    Graph(int v)
    {
        this->V = v;
        l = new list<int>[v];
    }
    void addEdge(int x, int y)
    {
        l[x].push_back(y);
        l[y].push_back(x);
    }
    void bfs()
    {
        queue<int> q;
        vector<bool> vis(V, false);
        q.push(0);
        vis[0] = true;
        while (q.size() > 0)
        {
            int u = q.front();
            q.pop();
            cout << u << " ";
            for (int v : l[u])
            {
                if (!vis[v])
                {
                    q.push(v);
                    vis[v] = true;
                }
            }
        }
    }
    void dfshelper(int u, vector<bool> &vis)
    {
        cout << u << " ";
        vis[u] = true;
        for (int v : l[u])
        {
            if (!vis[v])
            {
                dfshelper(v, vis);
            }
        }
    }
    void dfs()
    {
        int src = 0;
        vector<bool> vis(V, false);
        dfshelper(src, vis);
        cout << endl;
    }
};
int main()
{
    deque<int> dq;
    Graph g(7);
    g.addEdge(0, 1);
    g.addEdge(1, 5);
    g.addEdge(1, 2);
    g.addEdge(4, 5);
    g.dfs();

    return 0;
}