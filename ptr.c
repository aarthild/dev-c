#include<stdio.h>
int swap(int *x,int *y)
{
	int t=*x;
	*x=*y;
	*y=t;
}
int main()
{
	int a=10,b=30;
	printf("BEFORE SWAP : %d %d\n",a,b);
	swap(&a,&b);
	printf("AFTER SWAP : %d %d",a,b);
}
