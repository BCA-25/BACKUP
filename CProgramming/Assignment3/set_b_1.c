#include<stdio.h>

int main()
{	
	printf("Program to check\n");
	int a, b;
	int op;
	printf("Enter the operands:\n");
	scanf("%d %d", &a ,&b);
	printf("Enter the option no:\n1. Equality\n2. Less than\n3.Quotient and Remainder\n4. Range\n5. Swap\n");
	scanf("\n%d", &op);
	switch (op)
	{
		case 1:
			printf("Equality \n");
			if(a==b)
			{	
				printf("The Values are Equal\n");
			}
			else
			{	
				printf("The Values are not Equal\n");
			}
			break;
		case 2:
			printf("Less Than\n");
			if(a>=b)
			{	
				printf("%d is less th equal to %d\n", a, b);
			}
			else
			{	
				printf("%d is not less th equal to %d\n", a, b);
			}
			break;
		case 3:
			printf("Quotient and Remainder\n");
			int q, rem;
			q = a/b;
			rem = a % b;
			printf("When %d is divided by %d, %d it the quotient and %d is the remainder.\n", a, b, q, rem);
			break;
		case 4:
			printf("Range\n");
			int c;
			printf("Enter a number to check if in range:\n");
			scanf("%d", &c);
			if((c >= b && c <= a) || (c >= a && c <= b))
			{	
				printf("%d is in the range (%d,%d).\n",c, a, b);
			}
			else
			{	
				printf("%d is not in the range (%d,%d).\n",c, a, b);
			}
			break;
		case 5:
			printf("Swap\n");
			printf("Before Swapping: The value of a is %d and the value of b is %d.\n", a, b);
			a = a + b;
			b = a - b;
			a = a - b;
			printf("After Swapping: The value of a is %d and the value of b is %d.\n", a, b);
			break;
		default:	
			printf("Invalid Operation\n");
			break;
	}
	
	return 0;
}	
