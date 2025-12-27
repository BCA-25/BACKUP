#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int choice;
	float x1 , y1 , x2, y2;
	do{
		printf("Enter the first co-ordinates:\n");
		scanf("%f,%f", &x1 , &y1 );
		printf("Enter the second co-ordinates:\n");
		scanf("%f,%f", &x2 , &y2 );
		printf("1. Distance\n2. Slope\n3. Check Whether they lie in the same quadrant\n4. Exit\nEnter option number:\n");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1: {
				printf("Distance:\n");
				float distance;
				distance = sqrt(pow(x2-x1,2) + pow(y2 -y1,2));
				printf("The distance between the two points are %f\n", distance);
				break;
			}
			case 2: {
				printf("Slope:\n");
				float slope;
				slope = (y2-y1)/(x2 - x1);
				printf("Slope of the points is %f\n", slope);
				break;
			}
			case 3: {
				printf("Check Whether the points are in the same quadrant :\n");
				if((x1 > 0 && x2 > 0) || (x1 < 0 && x2 < 0))
				{
					if((y2 > 0 && y1 > 0) || (y1 < 0 && y2 < 0))
					{
						printf("They are in the same quadrant\n");	
					}
					else
					{
						printf("They are not in the same quadrant\n");	
					}
				}
				else
				{
					printf("They are not in the same quadrant\n");
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
