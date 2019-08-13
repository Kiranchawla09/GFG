int maxLen(int A[],int n)
{
    unordered_map <int,int>mp;
    int sum=0;
    int res=0;
    for (int i=0;i<n;i++)
    {
        sum+= A[i];
        if (sum==0)
        res= i+1;
        
        if (mp.find(sum)!=mp.end())
        {
            res= max(i-mp.find(sum)->second, res);
        }
        mp.insert (make_pair(sum,i));
    }
    return res;
  //Your code here
}
