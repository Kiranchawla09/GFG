// Counting 
void countDistinct(int A[], int k, int n)
{
    int count=0;
    int arr1[k];
    for (int i=0;i<=n-k;i++)
    {
          unordered_set<int>mp;
        for (int j=i;j<i+k;j++)
        {
            mp.insert(A[j]);
        }
        cout<< mp.size()<< " ";
    }
    //Your code here
}
