#include<stdio.h>


int main()
{
	int i;	
	printf("Write a program to accept numbers from 1 to 25 and the number of occurences\n");
	printf("Enter Number of Values:\n");
	scanf("%d", &i);
	int occ[24];
	int arr[i - 1];
	printf("%d values(1-25) to store:\n", i); 
	for(int n = 0;n < 25; n++)
	{
		occ[n] = 0;
	}
	for(int n = 0;n < i; n++)
	{
		printf("Enter value %d:\n" , n + 1);
		scanf("%d", &arr[n]);
	}
	for(int n = 0; n < 25; n++)
	{
		for(int m = 0;m < i; m++)
	{
		if(arr[m] == n+1)
		{
			occ[n]++;
		}
	}
	}
	printf("Printing values:\n"); 
	for(int n = 0;n < 25; n++)
	{
		if( occ[n] != 0){
		printf("Number of %d's is %d\n", n + 1,  occ[n]);
		}
	}
	return 0;
}


