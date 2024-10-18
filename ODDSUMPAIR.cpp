#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int x;
	cin>>x;
	for(int i=0;i<x;i++)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
	    if((a+b)%2!=0 || (b+c)%2!=0 || (a+c)%2!=0)
	    {
	        cout<<"Yes\n";
	    }
	    else
	    {
	        cout<<"No\n";
	    }
	}

}
