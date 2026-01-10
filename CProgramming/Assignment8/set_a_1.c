#include<stdio.h>

int Sum(int n);
int main()
{
	printf("Program to display sum of digits of entered number:\n");
	int n, sum;
	printf("Enter a number:\n");
	scanf("%d", &n);
	sum = Sum(n);
	printf("The sum of the digits of the number %d is %d\n",  n , sum );
	
	return 0;
}

int Sum(int n)
{
	if(n % 10 == n){
		return n;
	}
	else
	{
		return n%10 + Sum(n/10);	
	}
}
