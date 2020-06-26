#include <iostream>
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
	    for (int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    int count=0;
	    while (n>0)
	    {
	        n/=2;
	        count++;
	    }
	    cout<< count-1 <<endl;
	}
	return 0;
}