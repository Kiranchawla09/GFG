
/*You are requried to complete this method */
int max_Books(int a[], int n, int k)
{
    int temp=0;
    int max=0;
    for (int i=0;i<n;i++)
    {
        if (a[i]>k)
        {
            if (temp>=max)
            {
                max=temp;
            }
              temp=0;
        }
        else if (a[i]<=k)
        {
            temp+=a[i];
        }
    }
    if (temp>max)
    max=temp;
    return max;
    // Your code here
}