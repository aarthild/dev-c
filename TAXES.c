#include <stdio.h>

int main(void) {
	// your code goes here
int n,t;
scanf("%d",&t);
while(t--)
{
    scanf("%d",&n);
    if(n<=100)
    {
        printf("%d\n",n);
    }
    else
    {
        printf("%d\n",n-10);
    }
}
}

