#include <stdio.h>

int main(void) {
	// your code goes here
	int t,m,n;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d %d",&m,&n);
	    if(m>=n)
	    {
	        printf("YES\n");
	    }
	    else
	    {
	        printf("NO\n");
	    }
	}

}

