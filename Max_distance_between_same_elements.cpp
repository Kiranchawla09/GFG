int maxDistance(int arr[], int n)
{
    int maxdist=0;
    
    for (int i=0;i<n;i++)
    {
        int temp= i;
        int k=i;
        for (int j=i+1;j<n;j++)
        {
            if (arr[j]==arr[i])
            k=j;
        }
        int sub=k-temp;
        if (sub>maxdist)
        maxdist= sub;
    }
    return maxdist;
//Code here
}