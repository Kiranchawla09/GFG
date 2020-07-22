struct Node {
    int data;
    Node* right;
    Node* left;
    
    Node(int x){
        data = x;
        right = NULL;
        left = NULL;
    }
};
*/

// your task is to complete the below function
int minValue(Node* root)
{
    if (root==NULL || root->left==NULL)
    return root->data;
    
    else
    {
        minValue(root->left);
    }
    // Code here
}
