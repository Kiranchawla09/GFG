//Foldable Binary tree
int same(node *n1,node*n2)
{
if(n1==NULL && n2==NULL)
return 1;
if((n1!=NULL && n2==NULL) ||(n1==NULL && n2!=NULL) )
return 0;
return ((same(n1->left,n2->left)) && (same(n1->right,n2->right)));
}
bool isFoldable(struct node *root)
{
if(root==NULL)
return true;
mirror(root->left);
int x=same(root->left,root->right);
if(x==1)
return true;
return false;
}
