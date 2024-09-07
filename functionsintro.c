#include<stdio.h>
int add(int a,int b)
{
	int c=a+b;
	printf("\n%d",c);
}
int main()
{
	int a=10,b=20;
	add(a,b); 
	
	int c=5,d=9;
	add(c,d);
}
