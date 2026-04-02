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
        +l[v].push_back(u);
    }
    bool detection(int src, vector<bool> &vis, int parent)
    {
        vis[src] = true;
        for (int neigh : l[src])
        {
            if (!vis[neigh])
            {
                if (detection(neigh, vis, src))
                    return true;
            }
            else if (neigh != parent)
                return true;
        }
        return false;
    }
    bool detect_cycle()
    {
        vector<bool> vis(v, false);
        for (int i = 0; i < v; i++)
        {
            if (!vis[i])
            {
                if (detection(i, vis, -1))
                {
                    return true;
                }
            }
        }
        return false;
    }
};
int main()
{
    Graph g(6);
    g.addedg(1, 2);
    g.addedg(2, 3);
    g.addedg(3, 1);
    g.addedg(3, 4);
    g.addedg(4, 5);
    cout << g.detect_cycle() << endl;
    return 0;
}