bool isBSTornot(Node*root, int min, int max)
{
    if (root==NULL)
    return 1;
    
    if (root->data < min || root->data > max)
        return 0;
    
    return isBSTornot(root->left, min, root->data-1) &&
    isBSTornot(root->right, root->data+1, max);
}
// return true if the given tree is a BST, else return false
bool isBST(Node* root) {
    // Your code here
    isBSTornot(root, INT_MIN, INT_MAX);
}
