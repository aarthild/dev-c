#include <stdio.h>

int main(void) {
	// your code goes here
	int x,y,z;
	scanf("%d %d %d",&x,&y,&z);
	if(x*z>y*z)
	{
	    printf("%d",x*z);
	}
	else
	{
	    printf("%d",y*z);
	}

}

