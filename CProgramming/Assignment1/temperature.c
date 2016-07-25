#include<stdio.h>

int main()
{
	printf("Program to calculate Temperature in Farenheit and Kelvin.\n");
	float C , F,  K;	
	printf("Enter temperature in Fahrenhiet:\n");
	scanf("%f", &F);
	C = 5*(F - 32)/9;  
	printf("Temperature in Celcius is = %.2f \n", C);
	K = C + 273.15;
	printf("Temperature in Kelvin is = %.2f \n", K);

	return 0;
}
