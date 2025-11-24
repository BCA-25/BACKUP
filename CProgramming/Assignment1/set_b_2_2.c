#include<stdio.h>

int main()
{
	printf("Program to swap two numbers w/o third variable\n");	
	int a, b;
	printf("Enter the First Number:\n");
	scanf("%d", &a);
	printf("Enter the Second Number:\n");
	scanf("%d", &b);
	 
	printf("Before Swapping: The value of a is %d and the value of b is %d.\n", a, b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("After Swapping: The value of a is %d and the value of b is %d.\n", a, b);
	
	
	return 0;
}
