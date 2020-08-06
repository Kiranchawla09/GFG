#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct Meeting 
{
    int a, b,c;
};
bool Meetingseq(Meeting &m1, Meeting &m2)
{
    return (m1.b<m2.b);
}
int main() {
	//code
	int t;
	cin>> t;
	while (t--)
	{
	    int n;
	    cin>> n;
	    Meeting arr[n];
	    for (int i=0;i<n;i++)
	    {
	        cin>> arr[i].a;
	    }
	    for (int i=0;i<n;i++)
	    {
	        cin>> arr[i].b;
	    }
	    for (int i=0;i<n;i++)
	    {
	        arr[i].c=i+1;
	    }
	    sort (arr, arr+n, Meetingseq);
	    cout<< arr[0].c << " ";
	    int j=0;
	    for (int i=1;i<n;i++)
	    {
	        if (arr[i].a >= arr[j].b)
	        {
	            cout<< arr[i].c << " ";
	            j=i;
	        }
	    }
	    cout << endl;
	}
	return 0;
}