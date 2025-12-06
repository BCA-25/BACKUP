#include<stdio.h>

int main()
{
	printf("Program to print Fibbonacci Sequence\n");
	int n,c, a = 0, b=1;
	printf("Enter the number of elements to print\n");
	scanf("%d",&n);
	printf("Printing first %d elements of Fibbonacci Sequence:\n",n);
	printf("%d %d ", a , b);
	for(int i = 3; i <= n ;i++)
	{	
		c = a + b;
		printf("%d ",c);
		a = b;
		b = c;

	}
	printf("\n");
	
	
	return 0;
}
