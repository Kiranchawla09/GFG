#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>> t;
	while (t--)
    {
        int n1,n2,n3;
        cin>> n1 >> n2>> n3;
        int arr1[n1],arr2[n2],arr3[n3];
        for (int i=0;i<n1;i++)
        {
            cin>> arr1[i];
        }
         for (int i=0;i<n2;i++)
        {
            cin>> arr2[i];
        }
         for (int i=0;i<n3;i++)
        {
            cin>> arr3[i];
        }
        int a=0,b=0,c=0;
        bool h=0;
        map<int,int>mp;
        while (a<n1 && b<n2 && c<n3)
        {
            if (arr1[a]==arr2[b] && arr2[b]==arr3[c])
            {
                mp[arr1[a]]++;
                a++;
                b++;
                c++;
                h=1;
                continue;
            }
            int temp= min(min(arr1[a],arr2[b]),arr3[c]);
            if (temp==arr1[a])
            a++;
            else if (temp==arr2[b])
            b++;
            else if (temp==arr3[c])
            c++;
        }
        if (h==0)
        cout<< "-1";
        else
        {
            for (auto itr: mp)
            {
                cout<< itr.first <<" ";
            }
        }
        cout<< endl;
    }
	return 0;
}