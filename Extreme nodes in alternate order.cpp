void printExtremeNodes(Node* root)
{
    queue<Node*>q;
    q.push(root);
    q.push (NULL);
    vector<int>v1;
    vector<vector<int>>v2;
    while (!q.empty())
    {
        Node*temp= q.front();
        q.pop();
        if (temp!=NULL)
        {
            v1.push_back(temp->data);
            if (temp->left)
            q.push (temp->left);
            if (temp->right)
            q.push (temp->right);
        }
        else
        {
            if (!q.empty())
            {
                v2.push_back(v1);
                v1.clear();
                q.push(NULL);
            }
        }
    }
    v2.push_back(v1);
    for (int i=0;i<v2.size();i++)
    {
        if (i%2==0)
        {
            cout<< v2[i][v2[i].size()-1]<< " ";
        }
        else
        cout<< v2[i][0]<< " ";
    }
    
}

