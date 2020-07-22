Node*BST (Node*root, int i)
{
    if (root==NULL)
    root=new Node(i);
    
    else if (root->data>i)
    {
        root->left= BST(root->left, i);
    }
    else
    root->right= BST(root->right,i);
    
    return root;
}
Node *constructTree (int post[], int size)
{
    if (size==0)
    return NULL;
    
    Node*root=NULL;
    
    for (int i=size-1;i>=0;i--)
    {
        root=BST(root,post[i]);
    }
    return root;
//code here
}