#include <iostream>
#include<bits/stdc++.h>
using namespace std;
struct Activity
{
    int start, end;
};
bool ActivityCompare(Activity &a, Activity &b)
{
    return a.end < b.end;
}
int main() {
	//code
	int t;
	cin>> t;
	while (t--)
	{
	    int n;
	    cin>>n;
	    Activity arr[n];
	    for (int i=0;i<n;i++)
	    {
	        cin>> arr[i].start;
	    }
	    for (int i=0;i<n;i++)
	    {
	        cin>> arr[i].end;
	    }
	    sort (arr, arr+n, ActivityCompare);
	    int y=0;
	    int count=1;
	    for (int i=1;i<n;i++)
	    {
	        if (arr[i].start >= arr[y].end){
	        count++;
	        y=i;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}