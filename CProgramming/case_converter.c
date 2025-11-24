#include<stdio.h>

int main()
{	
	printf("Program to change case of character.\n");
	char ch1, ch2;
	printf("Enter a uppercase character:\n");
	scanf("%c", &ch1);
	printf("Enter a lowercase character:\n");
	scanf("\n%c", &ch2);
	printf("%c is the lowercase character for %c.\n", ch1 + 32, ch1);
	printf("%c is the uppercase character for %c.\n", ch2 - 32, ch2);
	return 0;
}
