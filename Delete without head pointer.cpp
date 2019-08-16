void deleteNode(Node *node)
{
  struct Node*ptr= node->next;
  int temp= ptr->data;
  node->data=temp;
  node->next=ptr->next;
  free(ptr);
   // Your code here
}

