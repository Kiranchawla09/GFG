#include<math.h>
void traversal (struct Node*root, int k, int &min)
{
    if(root==NULL)
    {
        return;
    }
    if (root->data==k)
    {
        min=0;
        return;
    }
    if (min>abs(root->data-k))
    min= abs(root->data-k);
    if (k< root->data)
    traversal (root->left,k,min);
    else
    traversal (root->right,k,min);
}

int maxDiff(struct Node *root, int k)
{
    int min= INT_MAX;
    
    traversal (root,k,min);
    return (min);
    //Your code here
}

