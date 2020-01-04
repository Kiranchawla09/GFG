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
	    cin>> n;
	    int arr[n];
	    for (int i=0;i<n;i++)
	    {
	        cin>> arr[i];
	    }
	    int curr_max, g_max;
	   curr_max= arr[0];
	   g_max=arr[0];
	   for (int j=1;j<n;j++)
	   {
	       curr_max= max(arr[j], arr[j]+curr_max);
	       g_max= max(g_max, curr_max);
	   }
	   cout<< g_max<< "\n";
	}
	return 0;
}