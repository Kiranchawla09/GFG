void reversePrint(Node *root)
{
    queue<Node*>q;
    q.push (root);
    stack <int> s;
    
    while (!q.empty())
    {
        Node *temp= q.front();
        q.pop();
        s.push (temp->data);
        if (temp->right)
        q.push (temp->right);
        if (temp->left)
        q.push (temp->left);
    }
    
    while (!s.empty())
    {
        cout<< s.top()<<" ";
        s.pop();
    }
    //Your code here
}
