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
    bool biparitite()
    {
        deque<int> dq;
        dq.push_back(1);
        vector<int> vis(7, -1);
        vis[1] = 0;
        while (dq.size() > 0)
        {
            int e = dq.front();
            dq.pop_front();
            for (int v : l[e])
            {
                if (vis[v] != vis[e] && vis[v] == -1)
                {
                    dq.push_back(v);
                    if (vis[e] == 0)
                        vis[v] = 1;
                    else
                        vis[v] = 0;
                }
                else if (vis[v] == vis[e])
                    return false;
            }
        }
        return true;
    }
};
int main()
{
    Graph g(7);
    g.addEdge(1, 2);
    g.addEdge(2, 3);
    g.addEdge(3, 4);
    g.addEdge(4, 6);
    g.addEdge(2, 5);
    g.addEdge(5, 4);
    cout << g.biparitite() << endl;
    return 0;
}