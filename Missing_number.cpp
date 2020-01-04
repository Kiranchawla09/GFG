#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>> t;
	while (t--)
	{
	    int n;
	    cin>>n;
	    vector <int> arr(n);
	    for (int i=0;i<n-1;i++)
	    {
	        cin>> arr[i];
	    }
	    arr[n-1]=n+1;
	    sort(arr.begin(),arr.end());
	    if (n-1!=1)
	    {
	    for (int j=0;j<n;j++)
	    {
	        if (arr[j]!=j+1)
	        {
	            cout<< j+1<< "\n";
	            break;
	        }
	        else
	        continue;
	    }
	    } 
	    else if (n==2)
	    {
	        if (arr[0]==1)
	        {
	            cout<< "2"<< endl;
	        }
	        else
	        {
	            cout << "1"<< endl;
	        }
	    }
	}
	return 0;
}