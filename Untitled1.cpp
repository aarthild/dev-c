#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int a=t/5;
	if(t%5==0)
	{
		cout<<a;
	}
	else
	{
		cout<<a+1;
	}
}
