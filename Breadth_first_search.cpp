vector <int> bfs(vector<int> g[], int N) {
queue<int>q;
vector <bool> vis(N,0);
vector<int> result;
q.push(0);
vis[0]=true;
while(!q.empty())
{
    int node= q.front();
    result.push_back(node);
    q.pop();
    for (auto itr: g[node])
    {
        if (!vis[itr])
        {
            q.push(itr);
            vis[itr]=true;
        }
    }
}
    return result;
  // Your code here
}