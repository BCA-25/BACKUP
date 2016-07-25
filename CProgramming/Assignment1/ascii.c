#include<stdio.h>

int main()
{
	printf("Program to display next and previous character of the given character.\n");	
	char ch;
	printf("Enter a Character: \n");
	scanf("%c", &ch);
	printf("%c is the previous character \n", ch - 1);
	printf("%c is the next character\n", ch + 1);
	return 0;
}
