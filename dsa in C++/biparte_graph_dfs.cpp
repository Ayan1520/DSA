#include <iostream>
#include <deque>
#include <vector>
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
        l = new list<int>[v];
    }
    void addEdge(int x, int y)
    {
        l[x].push_back(y);
        l[y].push_back(x);
    }
    bool biparitite(int curr, vector<int> &vis, int color)
    {
        vis[curr] = color;
        for (int v : l[curr])
        {
            if (vis[v] != -1)
            {
                if (vis[v] == color)
                    return false;
            }
            else
            {
                if (!biparitite(v, vis, 1 - color))
                    return false;
            }
        }
        return true;
    }
};
int main()
{
    vector<int> vis(7, -1);
    Graph g(7);
    g.addEdge(1, 2);
    g.addEdge(2, 3);
    g.addEdge(3, 4);
    g.addEdge(4, 6);
    g.addEdge(2, 4);
    cout << g.biparitite(1, vis, 0) << endl;
    return 0;
}