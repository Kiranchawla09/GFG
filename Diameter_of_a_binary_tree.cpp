/* Tree node structure  used in the program

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */
int height(struct Node* node) 
{ 
   if(node == NULL) 
       return 0; 
   return (1 + max(height(node->left), height(node->right))); 
} 
/* Computes the diameter of binary tree with given root.  */
int diameter(Node* node) {
    // Your code here
    if (node==NULL)
    return 0;
    int left_height = height(node->left);
    int right_height = height(node->right);
    
    int left_diameter = diameter(node->left); 
    int right_diameter = diameter(node->right);
    
    return (max(left_height+right_height+1,max(left_diameter, right_diameter)));
}
