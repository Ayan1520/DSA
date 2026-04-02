#include <iostream>
#include <list>
#include <deque>
#include <vector>
using namespace std;
class Graph
{
    int v;
    list<int> *l;

public:
    Graph(int v)
    {
        this->v = v;
        l = new list<int>[v];
    }
    void addedg(int u, int v)
    {
        l[u].push_back(v);
        l[v].push_back(u);
    }
    void printadj()
    {
        for (int i = 0; i < v; i++)
        {
            cout << i << ": ";
            for (int neigh : l[i])
            {
                cout << neigh << " ";
            }
            cout << endl;
        }
    }
    void bfs()
    {
        deque<int> dq;
        vector<bool> vis(v, false);
        dq.push_back(1);
        vis[1] = true;
        while (dq.size() > 0)
        {
            int e = dq.front();
            cout << e << " ";
            dq.pop_front();
            for (int neigh : l[e])
            {
                if (!vis[neigh])
                {
                    dq.push_back(neigh);
                    vis[neigh] = true;
                }
            }
        }
        cout << endl;
    }
    void dfshelper(int u, vector<bool> &vis)
    {
        cout << u << " ";
        vis[u] = true;
        for (int neigh : l[u])
        {
            if (!vis[neigh])
                dfshelper(neigh, vis);
        }
    }
    void dfs()
    {
        vector<bool> vis(v);
        dfshelper(1, vis);
        cout << endl;
    }
};
int main()
{
    Graph g(5);
    g.addedg(1, 2);
    g.addedg(2, 3);
    g.addedg(3, 4);
    g.addedg(4, 1);
    g.printadj();
    g.bfs();
    g.dfs();
    return 0;
}