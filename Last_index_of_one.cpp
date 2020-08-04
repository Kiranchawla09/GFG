#include <iostream>
#include <string>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while (t--)
	{
	    string s;
	    cin>> s;
	    int n= s.size();
	    int index=-1;
	    for (int i=0;i<n;i++)
	    {
	        if(s[i]=='1')
	        {
	         index=i;
	        }
	    }
	    cout<< index;
	 cout<< endl;
	}
	return 0;
}