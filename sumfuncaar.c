#include<stdio.h>
int sum_array(int a[],int n)
{
	int i,s=0;
	for(i=0;i<n;i++)
	{
		s=s+a[i];
	}
	return s;
}
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int res=sum_array(a,n);
	printf("%d",res);
	
}
