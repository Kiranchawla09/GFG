int getSize(Node* node)
{
   if (node==NULL)
   return 0;
   return (getSize(node->left)+getSize(node->right)+1);
   // Your code here
}