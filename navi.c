#include<stdio.h>
int main()
{
	char ch;
	int a,b;
	scanf("%c",&ch);
	scanf("%d %d",&a,&b);
	switch(ch)
	{
		case '+':
			printf("%d",a+b);
			break;
			case '-':
			printf("%d",a-b);
			break;
			case '*':
			printf("%d",a*b);
			break;
			case '/':
			printf("%d",a/b);
			break;
			default :
				printf("invalid operator");
			
	}
}
