void bfs(unordered_map<int, list<int>> &adjList, unordered_map<int, bool> &visited,
        vector<int> &ans, int node){
    
    queue<int> q;
    q.push(node);
    visited[node] = true;

    while(!q.empty()){
        int front = q.front();
        q.pop();
        ans.push_back(front);

        for(auto i : adjList[front]){
            if(!visited[i]){
                q.push(i);
                visited[i] = true;
            }
        }
    }
}
vector<int> bfsTraversal(int n, vector<vector<int>> &adj){
    unordered_map<int, list<int>> adjList;
    vector<int> ans;
    unordered_map<int, bool> visited;

    for(int i=0; i<adj.size(); i++){
        int u = adj[i][0];
        int v = adj[i][1];

        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    for(int i=0; i<n; i++){
        if(!visited[i])
            bfs(adjList, visited, ans, i);
    }
    return ans;
}