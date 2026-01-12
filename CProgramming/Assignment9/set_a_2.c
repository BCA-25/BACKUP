#include<stdio.h>


int main()
{
	int i;	
	printf("Write a program to print user accepted array.\n");
	printf("Enter Number of Values:\n");
	scanf("%d", &i);
	int arr[i - 1];
	printf("%d values to store:\n", i); 
	for(int n = 0;n < i; n++)
	{
		printf("Enter value %d:\n" , n + 1);
		scanf("%d", &arr[n]);
	}
	printf("Printing values:\n"); 
	for(int n = 0;n < i; n++)
	{
		printf("%d ", arr[n]);
	}
	printf("\n");
	return 0;
}


