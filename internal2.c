#include<stdio.h>
int main()
{
	int n,a[n];
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
		for(i=n-1;i>=0;i--)
	 {
			printf("%d",a[i]);
		}
}
