#include <iostream>
#include <list>
#include <vector>
#include <stack>
using namespace std;
class Graph
{
    int V;
    list<int> *l; // int *arr
public:
    Graph(int V)
    {
        this->V = V;
        l = new list<int>[V];
        // arr=new int[v]
    }
    void addEdge(int u, int v)
    {
        l[u].push_back(v);
    }

    void dfs(int u, vector<bool> &vis, stack<int> &s)
    {
        vis[u] = true;
        for (int v : l[u])
        {
            if (!vis[v])
            {
                dfs(v, vis, s);
            }
        }
        s.push(u);
    }
    void toposort()
    {
        vector<bool> vis(V, false);
        stack<int> s;
        for (int i = 0; i < V; i++)
        {
            if (!vis[i])
            {
                dfs(i, vis, s);
            }
        }
        int size = s.size();
        for (int i = 0; i < size; i++)
        {
            cout << s.top() << " ";
            s.pop();
        }
    }
};
int main()
{
    Graph g(7);
    g.addEdge(1, 2);
    g.addEdge(2, 3);
    g.addEdge(3, 4);
    g.addEdge(4, 6);
    g.addEdge(2, 4);
    g.toposort();
    return 0;
}