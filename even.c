#include<stdio.h>
int even(int a)
{
	if(a%2==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int a;
	scanf("%d",&a);
	int res=even(a);
	if(res==1)
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}
}
