#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main() {
	//code
	int t;
	cin >> t;
	while(t--){
	    string ip;
	    cin >> ip;
	    char s[ip.length()];
	    int i;
	    for (i=0;i<ip.length();i++)
	    s[i]= ip[i];
	    s[i]='\0'; //end of string
	    char *c;
	    vector<string> a;
	    c = strtok(s,".");
	    while(c!=NULL)
	    {
	        a.push_back(c);
	        c = strtok(NULL,".");
	    }
	    for (int j=a.size()-1;j>=0;j--)
	    {
	        cout<< a[j];
	        if (j!=0)
	        cout<< ".";
	    }
	    cout<< endl;
	    }
	    return 0;
	}
