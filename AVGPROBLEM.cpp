#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int x;
	cin>>x;
	for(int i=1;i<=x;i++)
	{
	    float a,b,c;
	    cin>>a>>b>>c;
	    float m=(a+b)/2;
	    if(m>c)
	    {
	        cout<<"yes\n";
	    }
	    else
	    {
	        cout<<"no\n";
	    }
	}

}
