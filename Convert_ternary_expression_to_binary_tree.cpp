Node *newNode(char Data) 
{ 
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));  
    new_node->data = Data; 
    new_node->left = new_node->right = NULL; 
    return new_node; 
} 
Node *convertExpression(string str,int i)
{
    Node *root= newNode(str[i]);
    if (i==str.length()-1)
    return root;
    
    i++;
    if (str[i]=='?')
    {
        i++;
        root->left= convertExpression(str,i);
    }
    if (str[i]==':')
    {
        i++;
        root->right= convertExpression(str,i);
        return root;
    }
    else return root; 
//add code here.
}