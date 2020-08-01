void view (Node * root, map<int, pair<int,int>> &mp, int dist, int level)
{
    if (root==NULL)
    return;
    if (level >= mp[dist].second)
    {
        mp[dist]= {root->data,level};
    }
    view (root->left, mp, dist-1, level+1);
    view (root->right, mp, dist+1, level+1);
}
// Method that returns the bottom view.
vector <int> bottomView(Node *root)
{
    map<int, pair<int,int>>mp;
    vector<int>result;
    view (root, mp, 0, 0);
   // Your Code Here
   for (auto itr: mp)
   {
       result.push_back(itr.second.first);
   }
   return result;
}

