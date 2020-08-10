#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>> t;
	while(t--)
	{
	    int n,m;
	    cin>> n>>m;
	    int arr[n];
	    for (int i=0;i<n;i++)
	    {
	        cin>> arr[i];
	    }
	    int count=0;
	    sort (arr,arr+n);
	    int sum=0;
	    for (int i=0;i<n;i++)
	    {
	        sum+= arr[i];
	        if (sum<=m)
	        {
	            count++;
	        }
	        else
	        break;
	    }
	    cout<< count <<endl;
	}
	return 0;
}