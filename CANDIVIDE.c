#include <stdio.h>

int main(void) {
	// your code goes here
int t,m;
scanf("%d",&t);
while(t--)
{
    scanf("%d",&m);
    if(m%3==0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}
}

