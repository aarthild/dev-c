#include <stdio.h>

int main(void) {
	// your code goes here
int t,A,B;
scanf("%d",&t);
while(t--)
{
    scanf("%d %d",&A,&B);
    if(A>B)
    {
        printf("A\n");
    }
    else
    {
        printf("B\n");
    }
}
}

