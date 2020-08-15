vector<int> DFSUtlil (vector<int>*g,int s, int N)
{
    vector<int>result;
    vector <bool> visited (N,0);
    stack<int>st;
    st.push(s);
    visited[s]= 1;
    result.push_back(s);
    while (!st.empty())
    {
        int top= st.top();
        int flag=0;
        // cout<< g[top].size();
        for (int i=0;i<g[top].size();i++)
        {
            if (visited[g[top][i]]!=1)
            {
                st.push(g[top][i]);
                result.push_back(g[top][i]);
                visited[g[top][i]]=1;
                flag=1;
                break;
            }
        }
        if(!flag) 
        st.pop();
    }
    return result;
}

vector <int> dfs(vector<int> g[], int N)
{
    vector <int> result;
    return DFSUtlil (g, 0, N);
    // Your code here
    // return result;
}