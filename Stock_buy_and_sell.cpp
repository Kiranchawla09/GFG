void stockBuySell(int price[], int n) {
    //int count=0;
    int i=0;
    int k=0;
    while (i<n-1)
    {
        while ((i<n-1) && (price[i+1]<=price[i]))
        {
            i++;
        }
        int start= i;
        while (i<n-1 && price[i+1]>=price[i])
        {
            i++;
        }
        if (i==n)
        {
            i--;
        }
        if (start<i)
        {
            k=1;
            cout<< "(" <<start<< " "<< i<<")"<< " "; 
        }
    }
    if (k==0)
    cout<< "No Profit";
    cout<< endl;
}