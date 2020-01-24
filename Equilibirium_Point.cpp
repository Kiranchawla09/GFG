#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>> t;
	while (t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    int sum=0;
	    for (int i=0;i<n;i++)
	    {
	        cin>> arr[i];
	        sum+=arr[i];
	    }
	    int half= sum/2;
	    
	    int sum1=0;
	    int i=0;
	    while (i<n && sum1 <= half)
	    {
	        sum1+= arr[i];
	        i++;
	    }
	    int sum2= arr[i-1];
	    for (int j=i;j<n;j++)
	    {
	        sum2+= arr[j];
        }
	    if (sum1==sum2)
	    cout<< i << "\n";
	    else 
	    cout<< "-1"<< "\n";
	}
	return 0;
}