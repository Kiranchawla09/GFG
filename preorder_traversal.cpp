void preOrder(Node*root, vector <int>&result)
{
    if (root==NULL)
    return;
    result.push_back(root->data);
    preOrder(root->left, result);
    preOrder(root->right,result);
}
vector <int> preorder(Node* root)
{
    vector<int> result;
    preOrder(root, result);
    return result;
  // Your code here
}