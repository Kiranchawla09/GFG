void storenodes(Node*root, vector <Node *> &nodes)
{
    if (root==NULL)
    return;
    storenodes(root->left,nodes);
    nodes.push_back(root);
    storenodes(root->right,nodes);
}
Node* buildBST(vector<Node*>&nodes, int start,int end)
{
    if (start>end)
    return NULL;
    
    int mid= (start+end)/2;
    Node*root= nodes[mid];
    
    root->left= buildBST(nodes, start, mid-1);
    root->right= buildBST(nodes,mid+1, end);
    
    return root;
}
Node* buildBalancedTree(Node* root)
{
     vector<Node*> nodes; 
     storenodes(root, nodes);
     int n = nodes.size();
     return buildBST(nodes, 0,n-1);
	// Code here
}