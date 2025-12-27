#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int choice;
	do{
		printf("1. Sine\n2. Cosine\n3.Log\n4. e^x\n5. Square Root\n6. Exit\nEnter option number:\n");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1: {
				printf("Sine Function:\n");
				printf("Enter a number:\n");
				float sine;
				scanf("%f", &sine);
				printf("Sine value of %f: %f\n", sine, sin(sine));
				break;
			}
			case 2: {
				printf("Cosine Function:\n");
				printf("Enter a number:\n");
				float cosine;
				scanf("%f", &cosine);
				printf("Cosine value of %f: %f\n", cosine, cos(cosine));
				break;
			}
			case 3: {
				printf("Logarithm Function:\n");
				printf("Enter a number:\n");
				float val;
				scanf("%f", &val);
				printf("Log value of %f: %f\n", val, log(val));
				break;
			}
			case 4: {
				printf("e^x Function:\n");
				printf("Enter a number:\n");
				int x;
				scanf("%d", x);
				printf("Log value of %d: %f\n", x, exp(x));
				break;
			}
			case 5: {
				printf("Square Root Function:\n");
				printf("Enter a number:\n");
				float x;
				scanf("%f", x);
				printf("Square root of %f: %f\n", x, sqrt(x));
				break;
			}
			case 6: {
				printf("Program Successfully Exited.\n");
				break;
			}
			default: {
				printf("Invalid Choice.\n");
				break;
			}
		}
	}while(choice != 6);
	
	
	return 0;
}
