#include<stdio.h>
#include<math.h>
int main()
{
	printf("Program to calculate the distance between two points\n");
	float x1, y1, x2, y2, distance;	
	printf("Enter the first co-ordinates:\n");
	scanf("%f,%f", &x1 , &y1 );
	printf("Enter the second co-ordinates:\n");
	scanf("%f,%f", &x2 , &y2 );
	distance = sqrt(pow(x2-x1,2) + pow(y2 -y1,2));
	printf("The distance between the two points are %f", distance);
	return 0;
}
