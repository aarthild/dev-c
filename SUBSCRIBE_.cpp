#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int x;
	cin>>x;
	for(int i=0;i<x;i++)
	{
	    int a,b;
	    cin>>a>>b;
	    if(a%6==0)
	    {
	        int m=(a/6)*b;
	        cout<<"\n"<<m;
	    }
	    else
	    {
	        int n=(a/6)+1;
	        cout<<"\n"<<n*b;
	    }
	}

}
