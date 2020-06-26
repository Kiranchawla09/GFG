// Return a vector containing the inorder traversal of the tree
void inorder(Node*root, vector<int>&result)
{
    if (root==NULL)
    {
    return;
    }
    inorder(root->left,result);
    result.push_back(root->data);
    inorder (root->right,result);
}
vector<int> inOrder(Node* root)
{
    vector<int>result;
    inorder(root, result);
    return result;
  // Your code here
}