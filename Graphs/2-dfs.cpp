#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    void dfs(int node, vector<vector<int>> &adj, int vis[], vector<int> &ls)
    {
        vis[node] = 1;
        ls.push_back(node);

        for (auto it : adj[node])
        {
            if (!vis[it])
            {
                dfs(it, adj, vis, ls);
            }
        }
    }

    vector<int> dfs(vector<vector<int>>& adj)
    {
        int v = adj.size();
        int vis[v] = {0};

        vector<int> ls;

        dfs(0, adj, vis, ls);

        return ls;
    }
};

int main()
{
    int V, E;
    cout << "Enter number of vertices and edges: ";
    cin >> V >> E;

    vector<vector<int>> adj(V);

    cout << "Enter the edges (u v):\n";
    for (int i = 0; i < E; i++)
    {
        int u, v;
        cin >> u >> v;

        // Undirected graph
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    Solution obj;
    vector<int> ans = obj.dfs(adj);

    cout << "DFS Traversal: ";
    for (auto node : ans)
    {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}