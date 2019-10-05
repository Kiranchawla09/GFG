#include<string>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
		int t;
	cin>>t;
	while (t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    unordered_map<int,int>mp;
	    for (int i=0;i<n;i++)
	    {
	       cin>> arr[i];
	       mp[arr[i]]++;
	    }
	    int count=0;
	    for (auto itr=mp.begin();itr!= mp.end();itr++)
	    {
	    int l= (itr->second)/2;
	    count+=l;  
	    }
	    cout<< count*2 << "\n";
	}
	return 0;
}
