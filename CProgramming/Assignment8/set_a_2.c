#include<stdio.h>

int Fac(int n);
int main()
{
	printf("Program to display Factorial of the given number:\n");
	int n, fac;
	printf("Enter a number:\n");
	scanf("%d", &n);
	fac= Fac(n);
	printf("%d! is %d\n",  n , fac);
	
	return 0;
}

int Fac(int n)
{
	if(n <= 1){
		return 1;
	}
	else
	{
		return n* Fac(n-1);	
	}
}
