#include <bits/stdc++.h>
using namespace std;
class Disjoint
{
    vector<int> rank, parent, size;

public:
    Disjoint(int n)
    {
        rank.resize(n + 1, 0);
        parent.resize(n + 1, 0);
        size.resize(n + 1, 1);
        for (int i = 0; i <= n; i++)
        {
            parent[i] = 1;
        }
    }
    int findpar(int node)
    {
        if (node == parent[node])
            return node;
        return parent[node] = findpar(parent[node]);
    }

    void union_by_rank(int u, int v)
    {
        int ulp_u = findpar(u);
        int ulp_v = findpar(v);
        if (ulp_v == ulp_u)
            return;
        if (rank[ulp_u] < rank[ulp_v])
            parent[ulp_u] = ulp_v;
        else if (rank[ulp_u] > rank[ulp_v])
            parent[ulp_v] = ulp_u;
        else
        {
            parent[ulp_v] = ulp_u;
            rank[ulp_u]++;
        }
    }

    void union_by_size(int u, int v)
    {
        int ulp_u = findpar(u);
        int ulp_v = findpar(v);
        if (ulp_u == ulp_v)
            return;
        if (size[ulp_u] < size[ulp_v])
        {
            parent[ulp_u] = ulp_v;
            size[ulp_v] += size[ulp_u];
        }
        else
        {
            parent[ulp_v] = ulp_u;
            size[ulp_u] += size[ulp_v];
        }
    }
};
int main()
{
    Disjoint ds(7);
    ds.union_by_size(1, 2);
    ds.union_by_size(2, 3);
    ds.union_by_size(4, 5);
    ds.union_by_size(6, 7);
    // ds.union_by_size(5, 6);
    if (ds.findpar(5) == ds.findpar(6))
    {
        cout << "same" << endl;
    }
    else
    {
        cout << "not same" << endl;
    }
    return 0;
}