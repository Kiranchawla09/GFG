Node *copyLeftRight (Node*tree, unordered_map<Node*,Node*>mp)
{
    if (tree==NULL)
    return NULL;
    Node*root= new Node;
    root->data= tree->data;
    mp[tree]=root;
    root->left= copyLeftRight (tree->left,mp);
    root->right= copyLeftRight(tree->right,mp);
    if (tree->random!=NULL)
    mp[tree->random]++;
    return root;
}

Node *copyRandom (Node*tree, Node*root, unordered_map<Node*,Node*>mp)
{
    if (root==NULL)
    return NULL;
    root->random= mp[tree->random];
    copyRandom(tree->left,root->left, mp); 
    copyRandom(tree->right, root->right, mp); 
}
Node* cloneTree(Node*tree)
{
   Node*root= new Node;
   unordered_map<Node*,Node*>mp;
   Node*newtree= copyLeftRight (tree, mp);
   copyRandom(tree, newtree,mp);
   //Your code here
}

