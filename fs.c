#include<stdio.h>
int main()
{
    int a;
	scanf("%d",&a);
	int res=sum(a);
	printf("%d",res);	
}
int sum(int a)
{
	int rem,s=1;
	while(a>0)
	{
		rem=a%10;
		s=s*rem;
		a=a/10;
	}
	return s;
}
