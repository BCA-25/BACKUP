#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int isSymmetric(int arr[10][10], int i);
int Trace(int arr[10][10], int i);
int isUTri(int arr[10][10], int i);

int main()
{	
	printf("Menu-driven Program to perform operations on Matrix.\n");
	int choice;
	do{
		int i;
		printf("1. Check Symmetry\n2. Trace\n3. Check Upper Triangular Matrix\n4. Exit\nEnter option number:\n ");
		scanf("%d", &choice);
		printf("Enter Number of Rows and Columns:\n");
		scanf("%d", &i);
		int arr[10][10];
		printf("Enter Values:\n");
		for(int n = 0;n < i ; n++)
		{
			for(int  m = 0; m < i; m++)
			{
				printf("Enter value %d:%d\n" , n +1, m + 1);
				scanf("%d", &arr[n][m]);
			}	
		}
		for(int n = 0;n < i ; n++)
		{
			for(int  m = 0; m < i; m++)
			{
				printf("%d\t", arr[n][m]); 
			}	
			printf("\n");
		}
		switch(choice)
		{
			case 1: {
				printf("Checking Symmetry:\n");
				if(isSymmetric(arr, i))
				{	
					printf("Given Matrix is Symmetric\n");
				}
				else
				{
					printf("Given Matrix is not Symmetric\n");
				}
				break;
			}
			case 2: {
				printf("Calculating Trace:\n");
				printf("Trace of given Matrix is = %d\n", Trace(arr, i));
				break;
			}
			case 3: {
				printf("Checking Symmetry:\n");
				if(isUTri(arr, i))
				{	
					printf("Given Matrix is an Upper Triangular Matrix.\n");
				}
				else
				{
					printf("Given Matrix is not an Upper Triangular Matrix.\n");
				}
				break;
			}
			case 4: {
				printf("Program Successfully Exited.\n");
				break;
			}
			default: {
				printf("Invalid Choice.\n");
				break;
			}
		}
	}while(choice != 4);
	
	
	return 0;
}

int isSymmetric(int arr[10][10], int i)
{
	for(int n = 0;n < i; n++)
	{
		for(int  m = 0; m < i; m++)
		{
			if(arr[n][m] != arr[m][n])
			{ 
				return 0;
			}
		}	
	}
	return 1;
}

int Trace(int arr[10][10],int i)
{
	int sum = 0;
	for(int n = 0;n < i ; n++)
	{
		for(int  m = 0; m < i; m++)
		{
			if(n == m)
			{ 
				printf("%d\n" , arr[n][m]);
				sum += arr[n][m];
			}
		}	
		
			
	}
	return sum;
}

int isUTri(int arr[10][10],int i)
{
	
	for(int n = 0;n < i ; n++)
	{
			for(int  m = 0; m < i; m++)
		{
			if(arr[n][m] != 0 && m < n)
			{
				return 0;
			}
		}	
	}
	return 1;
}


