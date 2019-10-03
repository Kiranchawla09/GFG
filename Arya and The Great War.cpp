#include <iostream>
using namespace std;
//
int main() {
	//code
	
	int t;
	cin>> t;
	while (t--)
	{
	    int n;
	    cin>> n;
	    
	    int count_bits=0;
	    while (n != 1)
	    {
        if (n % 2)
        count_bits++;
        n=n/2;
        }
        cout<< count_bits+1<< "\n";
        }
	return 0;
}
