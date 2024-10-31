#include <bits/stdc++.h>
using namespace std;

vector<int> bfsTraversal(int n, vector<vector<int>> &adj) {
    vector<int> ans;
    vector<bool> visited(n, false);
    queue<int> q;

    q.push(0);
    visited[0] = true;

    while (!q.empty()) {
        int front = q.front();
        q.pop();
        ans.push_back(front);

        for (int neighbor : adj[front]) {
            if (!visited[neighbor]) {
                q.push(neighbor);
                visited[neighbor] = true;
            }
        }
    }

    return ans;
}
