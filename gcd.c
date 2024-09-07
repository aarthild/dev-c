#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	int min,gcd;
	min=(a<b)?a:b;
	while(min>0)
	{
		if(a%min==0&&b%min==0)
		{
			gcd=min;
			break;
		}
		min-=1;
	}
	printf("%d",gcd);
}
