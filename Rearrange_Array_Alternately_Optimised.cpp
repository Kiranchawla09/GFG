#include <iostream>
using namespace std;
int main() {
	//code
	int t;
	cin>> t;
	while (t--)
	{
	   long long int n;
	   cin>> n;
	   long long int arr[n];
	   long long int i,j,k;
	   for (j=0;j<n;j++)
	   {
	       cin>> arr[j];
	   }
	   long long int max_index= n-1;
	   long long int min_index= 0;
	   long long int max_element= arr[n-1]+1;
	   
	   for (i=0;i<n;i++)
	   {
	       if (i%2==0)
	       {
	           arr[i]+= arr[max_index] % max_element * max_element;
	           max_index--;
	       }
	       else
	       {
	           arr[i]+= arr[min_index] % max_element* max_element;
	           min_index++;
	       }
	   }
	   for (k=0;k<n;k++)
	   {
	       arr[k]=arr[k]/max_element;
	       cout<< arr[k]<< " ";
	   }
	    cout<< "\n";
	}
	return 0;
}