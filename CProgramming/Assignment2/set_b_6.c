#include<stdio.h>
#include<math.h>

int main()
{	
	printf("Program to display roots of quadratic equation.\n");
	float a, b ,c;
	float dis ;
	printf("For the equation ax^2+bx+c:\n");
	printf("Enter the value of 'a':\n");
	scanf("%f", &a);
	printf("Enter the value of 'b':\n");
	scanf("%f", &b);
	printf("Enter the value of 'c':\n");
	scanf("%f", &c);
	dis = (pow(b,2)-(4*a*c)); 
	if(dis < 0)
	{
		printf("The roots of the equation are not real.\n");
	}
	else if(dis > 0) 
	{	
		float rt1 = (-b + sqrt(dis))/(2*a);
		float rt2 = (-b - sqrt(dis))/(2*a);
		printf("The roots of the equation are %.2f and %.2f.\n", rt1 ,rt2);
	}	
	else if(dis == 0) 
	{	
		float rt1 = (-b/(2*a));
		printf("The equation has a single root %.2f.\n", rt1);
	}
	else
	{
		printf("Error\n");
	}
	
	return 0;
}
