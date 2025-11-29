#include<stdio.h>

int main()
{	
	printf("Program to perform operation on two operands\n");
	int a, b, result;
	char ch;
	printf("Enter the operands:\n");
	scanf("%d %d", &a ,&b);
	printf("Enter the operator:\n");
	scanf("\n%c", &ch);
	switch (ch)
	{
		case '+':
			result = a + b;
			printf("%d + %d = %d\n",a,b,result);
			break;
		case '-':
			result = a - b;
			printf("%d - %d = %d\n",a,b,result);
			break;
		case '*':
			result = a * b;
			printf("%d * %d = %d\n",a,b,result);
			break;
		case '/':
			result = a / b;
			printf("%d / %d = %d\n",a,b,result);
			break;
		case '%':
			result = a % b;
			printf("%d % %d = %d\n",a,b,result);
			break;
		default:	
			printf("Invalid Operation\n");
			break;
	}
	
	return 0;
}	
