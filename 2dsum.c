#include<stdio.h>
int main()
{
	int r,c,i,j,g;
	scanf("%d%d",&r,&c);
	int a[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	int b[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
		int d[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			d[i][j]=a[i][j]+b[i][j];
			printf("%d ",d[i][j]);
		}
		printf("\n");
	}
}

