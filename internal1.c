#include<stdio.h>
int main()
{
	int n,temp,rev=0,rem;
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		rem=n%10;
		n=n/10;
		rev=rev*10+rem;
	}
	if(rev==temp)
	{
		printf("palindrome");
	}
	else
	{
		printf("WasteFellow");
	}
}
