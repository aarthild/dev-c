//odd numbers of an array
#include<stdio.h>
int main()
{
	int i,o,n,a[n];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2!=0)
			o=a[i];
	}
	printf("%d",o);
}