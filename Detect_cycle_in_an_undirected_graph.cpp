bool DFS (int i, int p, vector <int> g[], bool visited[])
{
    visited[i]=1;
    for(auto itr=g[i].begin();itr!=g[i].end();itr++)
    {
        if (!visited[*itr])
        {
            if (DFS(*itr,i, g, visited))
            {
            return true;
            }
        }
        else if (*itr!=p)
        return true;
    }
    return false;
}
bool isCyclic(vector<int> g[], int V)
{
   // Your code here
   bool visited[V];
   for (int i = 0; i < V; i++) 
        visited[i] = false; 
   for (int i=0;i<V;i++)
   {
       if (!visited[i] && DFS(i,-1,g, visited))
       return true;
   }
   return false;
}