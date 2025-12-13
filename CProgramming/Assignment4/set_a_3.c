#include<stdio.h>

int main()
{
	printf("Program to display calculate x^n\n");
	int x,n;
	printf("Enter x:\n");
	scanf("%d",&x);
	printf("Enter n:\n");
	scanf("%d",&n);
	int i = 1;
	int sum = x;
	while(i < n)
	{
		sum *= x;
		i++ ;
	}
	printf("The Value of %d^%d is %d.\n",x,n,sum);
	
	return 0;
}
