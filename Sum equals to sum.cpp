#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    unordered_set<int>s;
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    int f=0;
	    for(int i=0;i<n-1;i++)
	    {
	        for(int j=i+1;j<n;j++)
	        {
	            int sum=arr[i]+arr[j];
	            //if i get the existing sum again by 2 diff nos
	            if(s.find(sum)!=s.end())
	            {
	                cout<<1<<endl;
	                f=1;
	                break;
	            }
	            else
	            {
	                s.insert(sum);
	            }
	        }
	        if(f==1)
	        break;
	    }
	    if(f==0)
	    cout<<0<<endl;
	}
	return 0;
}
