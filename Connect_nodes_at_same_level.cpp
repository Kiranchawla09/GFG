/* struct Node
{
  int data;
  Node *left,  *right;
  Node *nextRight;  // This has garbage value in input trees
}; */

// Should set the nextRight for all nodes
void connect(Node *p)
{
    queue <struct Node*> q;
    if (p==NULL)
    return;
    q.push(p);
    // p->nextRight==NULL;
    
    while (!q.empty())
    {
        int size= q.size();
        struct Node* prev=NULL;
        while (size--)
        {
            struct Node*temp= q.front();
            q.pop();
            if (temp->left)
            q.push(temp->left);
            if (temp->right)
            q.push(temp->right);
            
            if (prev!=NULL)
            {
                prev->nextRight= temp;
            }
            prev=temp;
        }
        prev->nextRight=NULL;
    }
   // Your Code Here
}

