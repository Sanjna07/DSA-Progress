#include <bits/stdc++.h>
using namespace std;

void dfs(int node, vector<int> adj[], vector<int> &vis, vector<int> &ls) {
    vis[node] = 1;
    ls.push_back(node);

    for (int it : adj[node]) {
        if (!vis[it]) {
            dfs(it, adj, vis, ls);
        }
    }
}

vector<int> dfsOfGraph(int V, vector<int> adj[]) {
    vector<int> vis(V + 1, 0);
    vector<int> ls;

    int start = 1;          // valid start node
    dfs(start, adj, vis, ls);

    return ls;
}

int main() {
    int V, E;
    cout << "Enter number of nodes and edges: ";
    cin >> V >> E;

    vector<int> adj[V + 1];

    for (int i = 0; i < E; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> ans = dfsOfGraph(V, adj);

    cout << "DFS Traversal: ";
    for (int x : ans) cout << x << " ";
}
