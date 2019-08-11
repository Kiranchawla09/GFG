#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
		int t;
	cin>>t;
	for (int p=0;p<t;p++)
	{
	    int n,m;
	    cin >>n>> m;
	    int arr[n];
	    for (int i=0;i<n;i++)
	    {
	        cin >> arr[i];
	    }
	    unordered_set <int> mp;
	    int flag=0;
	    for (int i=0;i<n;i++)
	    {
	            if (mp.find (m-arr[i])!= mp.end())
	            {
	                flag=1;
	                break;
	            }
	            else
	            mp.insert (arr[i]);
	       }
        if (flag==1)
        cout << "Yes" << endl;
        else if (flag==0)
        cout<< "No" <<endl;
	}
	return 0;
}
