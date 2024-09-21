#include <stdio.h>

int main(void) {
 int t,x,y;
 scanf("%d",&t);
 while(t--)
 {
     scanf("%d",&x);
     scanf("%d",&y);
     if((x-y)>0)
     {
         printf("%d\n",x-y);
     }
     else
     {
         printf("0\n");
     }
 }

}

