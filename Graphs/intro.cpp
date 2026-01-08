#include<bits/stdc++.h>
using namespace std;

int main(){
    cout << "Graphs Stored "<< endl;
    //matrix representation
    // int m,n;
    // cin >> m >> n;
    // int adj[m+1][n+1];
    // for(int i=0;i<m;i++){
    //     int u,v;
    //     cin >> u >> v;
    //     adj[u][v] = 1;
    //     adj[v][u] = 1; //for undirected graph
    // }

    //list representation
    int m,n;
    cin >> m >> n;
    vector<int> adj[n+1];
    for(int i=0;i<m;i++){
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u); //for undirected graph
    }
    return 0;
}