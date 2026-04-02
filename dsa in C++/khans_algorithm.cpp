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
    }
    void toposort(){
        vector<int> indeg(V,0);
        vector<int> ans;
        deque<int> dq;
        for (int i = 0; i < V;i++){
            for(int v:l[i]){
                indeg[v]++;
            }
        }
        for (int i = 0; i < V;i++){
            if(indeg[i]==0){
                dq.push_back(i);
            }
        }
        while(dq.size()>0){
            int curr = dq.front();
            dq.pop_front();
            ans.push_back(curr);
            for (int v:l[curr]){
                indeg[v]--;
                if(indeg[v]==0){
                    dq.push_back(v);
                }

            }
        }
        for (int i = 0; i < ans.size();i++){
            cout << ans[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    Graph g(6);
    g.addEdge(5,0);
    g.addEdge(5,2);
    g.addEdge(2,3);
    g.addEdge(3,1);
    g.addEdge(4,1);
    g.addEdge(4,0);
    g.toposort();
    return 0;
}