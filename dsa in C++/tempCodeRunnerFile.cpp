vector<int> vis(7, -1);
    Graph g(7);
    g.addEdge(1, 2);
    g.addEdge(2, 3);
    g.addEdge(3, 4);
    g.addEdge(4, 6);
    g.addEdge(2, 4);
    g.toposort();
    return 0;