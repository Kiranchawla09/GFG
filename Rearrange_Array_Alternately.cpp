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
	   int arr[n];
	   for (int k=0;k<n;k++)
	   {
	       cin>> arr[k];
	   }
	   int start=0;
	   if (n%2==0)
	   {
	   while (start!=n)
	   {
	   int temp= arr[n-1];
	   for (int i=n-1; i>start;i--)
	   {
	       arr[i]= arr[i-1];
	   }
	   arr[start]=temp;
	   start= start+2;
	   }
	   }
	   else
	   {
	    while (start!=n+1)
	   {
	   int temp= arr[n-1];
	   for (int i=n-1; i>start;i--)
	   {
	       arr[i]= arr[i-1];
	   }
	   arr[start]=temp;
	   start= start+2;
	   }
	   }
	   for (int j=0;j<n;j++)
	   {
	       cout<< arr[j]<< " ";
	   }
	   cout<< "\n";
	}
	return 0;
}