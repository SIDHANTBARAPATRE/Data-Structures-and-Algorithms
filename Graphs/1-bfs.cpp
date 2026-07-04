#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> bfs(vector<vector<int>> &adj) {
        int n = adj.size();

        vector<int> bfs;
        vector<int> vis(n, 0);

        queue<int> q;
        vis[0] = 1;
        q.push(0);

        while (!q.empty()) {
            int node = q.front();
            q.pop();

            bfs.push_back(node);

            for (auto it : adj[node]) {
                if (!vis[it]) {
                    vis[it] = 1;
                    q.push(it);
                }
            }
        }

        return bfs;
    }
};

int main() {
    int n, m;
    cin >> n >> m;

    // Adjacency List
    vector<vector<int>> adj(n);

    // Input edges
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);   // Remove this line for directed graphs
    }

    Solution obj;
    vector<int> ans = obj.bfs(adj);

    cout << "BFS Traversal: ";
    for (int node : ans) {
        cout << node << " ";
    }

    return 0;
}