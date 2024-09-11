#include<stdio.h>
int main()
{
	int res;
	 res=(10>20) && (15>10);
	printf("%d\n",res);
	res=(10>20) || (15>10);
	printf("%d",res);
	res=!(20>10);
	printf("%d",res);
	return 0;
}
