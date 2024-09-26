#include<stdio.h>
int main()
{
	int n,a[n],i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		//printf("%d ",a[i]);
	}
	int index,newone;
	scanf("%d",&index);
	scanf("%d",&newone);
  if(index<n)
  {
  	a[index] = newone;
  }
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
