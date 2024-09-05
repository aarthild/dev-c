//multi calculator
#include<stdio.h>
int main()
{
	char ch;
	int a,b;
	printf("enter operator");
	scanf("%c",&ch);
	printf("enter a and b values");
	scanf("%d%d",&a,&b);
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
	}
}
