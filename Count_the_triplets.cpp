#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>> t;
	while (t--)
	{
	    int n;
	    cin>> n;
	    vector<int>v(n);
	    for (int i=0;i<n;i++)
	    cin>> v[i];
	    sort (v.begin(),v.end());
	    int count=0;
	    for (int j=n-1;j>=0;j--)
	    {
	       int a= v[j], b= 0, c= j-1, sum;
	     while (b<c)
	     {
	         sum= v[b]+v[c];
	         if (sum== a)
	         {
	             count++;
	             b++;
	             c--;
	         }
	         else if (sum < a)
	         {
	           b++;  
	         }
	         else 
	         c--;
	     }
	    }
	      if(count==0)cout<<-1;
        else cout<<count;
        
        cout<<endl;
	}
	return 0;
}