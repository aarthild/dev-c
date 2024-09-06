#include<stdio.h>
int main()
{
	int a,sum=0;
	scanf("%d",&a);
	int i;
	{
		for(i=a;i>=1;i--)
		{
			if(i%2==0)
			printf("%d\n",i);
		}
	}
}
