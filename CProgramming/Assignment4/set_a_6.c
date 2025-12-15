#include<stdio.h>

int main()
{
	printf("Program to reverse entered number \n");
	int n;
	printf("Enter the Number:\n");
	scanf("%d",&n);
	int o = n;
	int rev = 0;
	while(o != 0 )
	{
		rev = (rev*10 + o%10); 
		o /= 10;
	}
	printf("The reversed number of %d is %d.\n", n , rev);

		
	
	
	return 0;
}
