#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{	
	printf("Menu-driven Program to perform functions on real part and imaginary part\n");
	int choice;
	do{
		printf("1. Add\n2. Subtract\n3. Multiply\n4. Exit\nEnter option number:\n");
		scanf("%d", &choice);
		int r1,r2,i1,i2;
		if( choice != 4)
		{
		printf("Enter the first complex number (x + yi):\n");
		scanf("%d + %di" , &r1, &i1);
		printf("Enter the second complex number (x + yi)\n");
		scanf("%d + %di" , &r2, &i2); 
		}
		switch(choice)
		{
			case 1: {
				printf("ADD:\n");
				int rs, is;
				rs = r1 + r2;
				is = i1 + i2;
				printf("The Addition of %d + %di and %d + %di is %d + %di  \n", r1, i1, r2 ,i2 ,rs,is);
				break;
			}
			case 2: {
				printf("Subtract:\n");
				int rs, is;
				rs = r1 - r2;
				is = i1 - i2;
				printf("The Subtraction of %d + %di by %d + %di is %d + %di  \n", r1, i1, r2 ,i2 ,rs,is);
				break;
			}
			case 3: {
				printf("Multiply:\n");
				int rs, is;
				rs = r1*r2 - (i1*i2);
				is = r1*i2 + i1*r2;
				printf("The Multiplication of %d + %di by %d + %di is %d + %di  \n", r1, i1, r2 ,i2 ,rs,is);
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
