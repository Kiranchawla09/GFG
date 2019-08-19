void levelOrder(Node* node)
{
    queue<Node*>q;
    q.push(node);
    q.push (NULL);
    while (q.size()!=1)
    {
        node= q.front();
        q.pop();
        if(node!=NULL)
        cout<< node->data << " ";
        else if (node==NULL)
        {
            cout<< "$" <<" ";
            q.push(NULL);
            continue;
        }
        if (node->left)
        q.push (node->left);
        if (node->right)
        q.push (node->right);
    }
    cout<< "$"<< " ";
}

