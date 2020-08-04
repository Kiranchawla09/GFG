#include <iostream>
#include<vector>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while (t--)
	{
	    int n;
	    cin>> n;
	    vector <int>arr(n);
	    for (int i=0;i<n;i++)
	    {
	        cin>> arr[i];
	    }
	    bool flag=0;
	   for(int i=0;i<n-1;i++){
          if(!flag)
          if(arr[i]>arr[i+1]) 
          swap(arr[i],arr[i+1]);
          if(flag)
          if(arr[i]<arr[i+1])
          swap(arr[i],arr[i+1]);
          flag=!flag;
      }
	    for (int i=0;i<n;i++)
	    {
	        cout<< arr[i] << " ";
	    }
	    	cout<< endl;
	}
	return 0;
}