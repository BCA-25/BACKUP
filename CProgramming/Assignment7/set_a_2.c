#include<stdio.h>

void Printchars(char ch, int n);
int main()
{
	printf("Program to display n charaters after entered character\n");
	int n;
	char ch;
	printf("Enter the character:\n");
	scanf("%c", &ch);
	printf("Enter the number of next characters:\n");
	scanf("%d", &n);
	Printchars(ch,n);
	return 0;
}

void Printchars(char ch, int n)
{
	printf("The next %d characters from '%c' are:\n", n, ch);
	for(;n > 0;n--)
	{
		ch++;
		printf("%c ", ch);
	}
	printf("\n");
}
