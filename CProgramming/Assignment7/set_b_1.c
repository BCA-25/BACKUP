#include<stdio.h>

int isPrime(int n);

int main()
{
	printf("Program to display first 10 prime numbers\n");
	int i = 0;	
	int n = 2;
	while(i < 10)
	{
		if(isPrime(n)){
			printf("%d ", n);
			i++;	
		}
		n++;
	}
	printf("\n");
	return 0;
}

int isPrime(int n)
{
	int i;
	if(n <= 1){
	return 0;
	}
	for(i = 2;i < n; i++)
	{
		if(n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}
