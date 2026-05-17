#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> bfsTraversal(vector<int> adj[], int v, int start) {
    vector<int> vis(v, 0);
    queue<int> q;
    vector<int> ans;

    // start BFS from source
    vis[start] = 1;
    q.push(start);

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        ans.push_back(node);

        for (auto it : adj[node]) {
            if (!vis[it]) {
                vis[it] = 1;
                q.push(it);
            }
        }
    }

    return ans;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> adj[n];

    // build adjacency list
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int s;
    cin >> s;

    vector<int> result = bfsTraversal(adj, n, s);

    for (int node : result) {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}