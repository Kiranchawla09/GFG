#include <iostream>
#include <bits/stdc++.h>
using namespace std;
const int MAX_CHAR=26;
struct Key
{
	int freq;
	char ch;
	bool operator<(const Key &k) const
    { 
        return freq < k.freq; 
    } 
}; 
void rearrange(string s)
{
    int n=s.length();
    int count[MAX_CHAR]={0};
    for (int i=0;i<n;i++)
    count[s[i]-'a']++;
    //inserting in priority queue
    priority_queue<Key> pq;
     for (char c = 'a' ; c <= 'z' ; c++) 
        if (count[c-'a']) 
            pq.push( Key { count[c-'a'], c} ); 
            
            s="";
            Key prev {-1, '#'} ; 
            while(!pq.empty())
            {
                Key k= pq.top();
                pq.pop();
                s= s+k.ch;
                if (prev.freq>0)
                {
                    pq.push(prev);
                }
                k.freq--;
                prev=k;
            }
             if (n == s.length()) 
            cout << "1" << endl; 
            
            else
            cout<< "0"<<endl;
          // cout << str << endl; 
}
int main() {
	//code
	int t;
	cin>>t;
	while (t--)
	{
	    string s;
	    cin>>s;
	    rearrange(s);
	}
	return 0;
}
