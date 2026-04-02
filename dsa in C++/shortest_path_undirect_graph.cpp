#include <iostream>
#include <list>
#include <deque>
#include <vector>
#include <climits>
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

    int shortest_path(int src, int end)
    {
        deque<pair<int, int>> dq;
        vector<int> dis(V, INT_MAX);
        dq.push_back({src, 0});
        dis[src] = 0;
        while (dq.size() != 0)
        {
            int node = dq.front().first;
            int distance = dq.front().second;
            dq.pop_front();
            for (int u : l[node])
            {
                if (dis[u] > distance + 1)
                {
                    dis[u] = distance + 1;
                    dq.push_back({u, distance + 1});
                }
            }
        }
        return dis[end];
    }
};

int main()
{
    Graph g(4);

    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 3);
    cout << g.shortest_path(0, 3) << endl;
    return 0;
}