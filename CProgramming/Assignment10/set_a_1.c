#include<stdio.h>


int main()
{
	int i, j;	
	printf("Write a program to accept a Matrix and Store its Inverse.\n");
	printf("Enter Number of Rows:\n");
	scanf("%d", &i);
	printf("Enter Number of Columns:\n");
	scanf("%d", &j);
	int arr[i][j];
	int val = 0;
	for(int n = 0;n < i ; n++)
	{
			for(int  m = 0; m < j; m++)
		{
			arr[n][m] = val;
			val++;
		}	
	}
	printf("Matrix A = \n");
	for(int n = 0;n < i ; n++)
	{
			for(int  m = 0; m < j; m++)
		{
			printf("%d\t", arr[n][m]); 
		}	
		printf("\n");
	}
	int brr[j][i];
	val = 0;
	for(int n = 0;n < i ; n++)
	{
			for(int  m = 0; m < j; m++)
		{
			brr[m][n] = val;
			val++;
		}	
	}
	printf("Matrix B = \n");
	for(int n = 0;n < j ; n++)
	{
			for(int  m = 0; m < i; m++)
		{
			printf("%d\t", brr[n][m]); 
		}	
		printf("\n");
	}
	return 0;
}


