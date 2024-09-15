#include <stdio.h>

int main(void) {
	int x,a,b;
	scanf("%d",&x);
	while(x--)
	{
	    scanf("%d",&a);
	    scanf("%d",&b);
	    if(a<b)
	    {
	        printf("%d\n",a);
	    }
	    else
	    {
	        printf("%d\n",b);
	    }
	}

}

