/* A binary tree node structure

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

// This function should return tree if passed  tree 
// is balanced, else false. 
int height (Node*root)
{
    if (root==NULL)
    return 0;
    
    else
    {
        int l_depth= height(root->left);
        int r_depth=height(root->right);
        if (l_depth>r_depth)
        {
            return (l_depth+1);
        }
        else 
        return (r_depth+1);
    }
}
bool isBalanced(Node *root)
{
    // bool val1= isBalanced(root->left);
    // bool val2= isBalanced(root->right);
    if (root==NULL)
    return true;
    if (abs(height(root->left)-height(root->right))<=1)
    {
        return (isBalanced(root->left) && isBalanced(root->right));
    }
    else
    return false;
    //  Your Code here
}
