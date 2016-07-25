#include<stdio.h>


int main()
{
	int i;	
	printf("Write a program to print user accepted sorted array.\n");
	printf("Enter Number of Values:\n");
	scanf("%d", &i);
	int arr[i - 1];
	printf("%d values to store:\n", i); 
	for(int n = 0;n < i; n++)
	{
		printf("Enter value %d:\n" , n + 1);
		scanf("%d", &arr[n]);
	}
	for(int m = 0; m < i - 1; m++)
	{
		for(int n = 0;n < i - 1; n++)
		{
			if(arr[n] > arr[n + 1])
			{
				int a = arr[n];
				arr[n] = arr[n + 1];
				arr[n + 1] = a;
			}

		} 
	}
	printf("Printing values:\n"); 
	for(int n = 0;n < i; n++)
	{
		printf("%d ", arr[n]);
	}
	printf("\n");
	return 0;
}


