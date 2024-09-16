#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int a[n];
  int i;
  for(i=0;i<n;i++)
  {
  	scanf("%d",&a[i]);
  }
  int min=a[0];
  int max=a[0];
  for(i=1;i<=n;i++)
  {
  	if(a[i] < min){
  	min = a[i];}
  	if(a[i]>max)
  	{
  	max = a[i];
}
printf("%d %d",max,min);
}
return 0;
}
