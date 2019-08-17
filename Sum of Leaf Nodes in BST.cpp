int sumOfLeafNodes(Node *r ){
     /*Your code here */
     if (r==NULL)
     return 0;
     else if (r->right==NULL && r->left==NULL)
     return r->data;
     else
     return (sumOfLeafNodes (r->left)+sumOfLeafNodes (r->right));
}
