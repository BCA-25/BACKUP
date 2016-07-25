#include<stdio.h>

int main()
{	
	printf("Program to display ASCII value of a character\n");
	char ch;
	printf("Enter a Character: \n");
	scanf("%c", &ch);
	printf("%d is the ASCII value of %c\n", ch , ch);
	return 0;
}
