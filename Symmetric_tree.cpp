bool isMirror (struct Node *root1, struct Node* root2)
{
    if (root1==NULL && root2==NULL)
    return true;
    
    if (root1 && root2 && root1->data==root2->data)
    {
        return (isMirror(root1->left, root2->right) && 
        isMirror (root2->left, root1->right));
    }
    return false;
}
// return true/false denoting whether the tree is Symmetric or not
bool isSymmetric(struct Node* root)
{
	// Code here
	return isMirror(root,root);
}