#include<stdio.h>

int main()
{
	int amt, ten, five, one;
	printf("Enter Amount\n");
	scanf("%d", &amt);
	ten = amt/10;
	amt %=10;
	five = (amt)/5;
	one = amt%5;
	printf("No of 10's Notes: %d \n",ten);
	printf("No of 5's Notes: %d\n",five);
	printf("No of 1's Notes: %d\n",one);
	
	
	return 0;
}
