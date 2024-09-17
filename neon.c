#include<stdio.h>
int main()
{
    int n,s,rem,a=0;
    scanf("%d",&n);
    s=n*n;
    while(s>0)
    {
        rem=s%10;
        a=a+rem;
        s=s/10;
    }
        if(a==n)
        {
            printf("Neon Number");
        }
        else
        {
            printf("Not Neon Number");
        }
    }
    
