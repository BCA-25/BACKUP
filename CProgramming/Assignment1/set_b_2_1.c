#include<stdio.h>

int main()
{
	printf("Program to swap two numbers w/ third variable\n");	
	int a, b, c;
	printf("Enter the First Number:\n");
	scanf("%d", &a);
	printf("Enter the Second Number:\n");
	scanf("%d", &b);
	 
	printf("Before Swapping: The value of a is %d and the value of b is %d.\n", a, b);
	c = b;
	b = a;
	a = c;
	printf("After Swapping: The value of a is %d and the value of b is %d.\n", a, b);
	
	
	return 0;
}
