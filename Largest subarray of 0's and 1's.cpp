int maxLen(int arr[], int n)
{
    
    for (int i=0;i<n;i++)
    {
        if (arr[i]==0)
        arr[i]=-1;
    }
    int sum=0;
    int ans= INT_MIN;
    unordered_map<int,int>mp;
    for (int i=0;i<n;i++)
    {
        sum+= arr[i];
        if (sum==0)
        {
            ans= max(ans, i+1);
        }
        if (mp.find(sum)!= mp.end())
        {
            ans= max(ans,i-mp[sum]);
        }
        else
        mp[sum]=i;
    }
   if(ans == INT_MIN)
        return 0;
    return ans; 
//Your code here
}
