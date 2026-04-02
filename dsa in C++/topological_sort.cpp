#include <iostream>
#include <deque>
#include <vector>
#include <list>
#include<stack>
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
    void dfs(int i,vector<bool>&vis,stack<int>&s){
        vis[i] = true;
        for(int v:l[i]){
            if(!vis[v]){
                dfs(v, vis, s);
            }
            s.push(i);
        }
    }
    void toposort(){
        vector<bool>vis(V, false);
        stack<int> s;
        for (int i = 0; i < V;i++){
            if(!vis[i]){
                dfs(i, vis, s);
            }
        }
        for (int i = 0; i < s.size();i++){
            cout << s.top() << " ";
            s.pop();
        }
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
    g.toposort();
    return 0;
}