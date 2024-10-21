#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int x;
	cin>>x;
	while(x--)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
	    if(c>(a*b)/2)
	    {
	        cout<<"yes\n";
	    }
	    else
	    {
	        cout<<"no\n";
	    }
	}

}
