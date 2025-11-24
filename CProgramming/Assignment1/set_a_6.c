#include<stdio.h>

int main()
{
	printf("Program to calculate Surface Area and Volume of a Cuboid:\n");
	float L , B,  H;	
	printf("Enter the Length:\n");
	scanf("%f", &L);
	printf("Enter the Breadth:\n");
	scanf("%f", &B);
	printf("Enter the Height:\n");
	scanf("%f", &H);
	float SA = 2*(L*B+B*H+H*L);  
	printf("Surface Area is = %.2f \n", SA);
	float V = L*B*H;
	printf("Volume is = %.2f \n", V);

	return 0;
}
