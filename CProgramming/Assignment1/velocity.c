#include<stdio.h>

int main()
{
	printf("Program to calculate final Velocity and Distance travelled:\n");
	float U , A,  T;	
	printf("Enter the Initial Velocity:\n");
	scanf("%f", &U);
	printf("Enter the Acceleration:\n");
	scanf("%f", &A);
	printf("Enter the Time:\n");
	scanf("%f", &T);
	float V = U + A*T;  
	printf("Final velocity is = %.2f \n", V);
	float S = U*T + (A*T*T)/2;
	printf("Distance travelled is = %.2f \n", S);

	return 0;
}
