#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int x;
	cin>>x;
	while(x--)
	{
	    int a;
	    cin>>a;
	    if(a>=1 && a<=10)
	    {
	        cout<<"Lower Double\n";
	    }
	    else if(a>=11 && a<=15)
	    {
	        cout<<"Lower Single\n";
	    }
	    else if(a>=16 && a<=25)
	    {
	        cout<<"Upper Double\n";
	    }
	    else
	    {
	        cout<<"Upper Single\n";
	    }
	}

}
