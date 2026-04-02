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
    bool dfs(int i,vector<bool>&vis,vector<bool>&path){
        vis[i] = true;
        path[i] = true;
        for(int v:l[i]){
            if(!vis[v]){
                if(dfs(v,vis,path)){
                    return true;
                }
            }
            else if(path[v]){
                return true;
            }
        }
        path[i] = false;
        return false;
    }
    bool cycle(){
        vector<bool> vis(V, false);
        vector<bool> path(V, false);
        for (int i = 0; i < V;i++){
            if(!vis[i]){
                if(dfs(i,vis,path)){
                    return true;
                }
            }
        }
        return false;
    }
};
int main()
{
    Graph g(4);
    g.addEdge(1,0);
    // g.addEdge(3,0);
    g.addEdge(0,2);
    g.addEdge(2,3);
    cout << g.cycle() << endl;
    return 0;
}