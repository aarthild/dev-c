#include<stdio.h>
int main()
{
	int i,a[10];
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++) {
		 if(a[i]%2==0)
		{
			printf("%d",a[i]);
		}
	}
}