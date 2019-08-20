void printSpiral(Node *root)
{
    queue<Node*>q;
    q.push (root);
    q.push (NULL);
    vector<int>v;
    vector<vector<int>>v2;
    while (!q.empty())
    {
        Node*temp= q.front();
        q.pop();
       if(temp!=NULL)
        {
            v.push_back(temp->data);
            if (temp->left)
            q.push (temp->left);
            if (temp->right)
            q.push (temp->right);
        }
        else
        {
            if (!q.empty())
            {
                v2.push_back(v);
                v.clear();
                q.push(NULL);
            }
        }
    }
    v2.push_back(v);
    for (int i=0; i<v2.size();i++)
    {
        if (i%2==0)
        {
            for (int j=v2[i].size()-1; j>=0;j--)
            {
                cout<< v2[i][j]<< " ";
            }
        }
        else
        for (int j=0;j<v2[i].size();j++)
        cout<< v2[i][j]<< " ";
    }
}

