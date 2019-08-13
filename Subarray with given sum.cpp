#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while (t--)
	{
	    int n,m;
	    cin>> n>> m;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>> arr[i];
	    }
	    int start=0;
	    int curr_sum = arr[0];
	    for (int i=1;i<=n;i++)
	    {
	        while (curr_sum > m && start<i-1)
	        {
	            curr_sum= curr_sum-arr[start];
	            start++;
	        }
	        if (curr_sum==m)
	        {
	            cout<< start+1<< " "<< i<< "\n";
	            break;
	        }
	        if(i<n)
	        {
	            curr_sum=curr_sum+arr[i];
	        }
	    }
	    if (curr_sum!=m)
	    cout<< "-1" <<"\n";
	}
}
