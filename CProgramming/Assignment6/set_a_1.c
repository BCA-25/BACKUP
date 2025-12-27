#include<stdio.h>
#include<ctype.h>

int main()
{
	char c;
	printf("Enter a Character:\n");
	scanf("%c",&c);
	if(isalpha(c))
	{
		printf("Character is a Letter.\n");
		if(isupper(c))
		{
			printf("%c is Uppercase.\n" , c);
			printf("Lowercase conversion: %c\n" , tolower(c));
		}
		else if(islower(c))
		{
			printf("%c is Lowercase.\n" , c);
			printf("Uppercase conversion: %c\n" , toupper(c));
		}
	}
	else if(isdigit(c))
	{
		printf("%c is a digit.\n" , c);
	}
	else if(ispunct(c))
	{
		printf("%c is a punctuation.\n" , c);
	}
	else
	{
		printf("Invalid Character.\n");
	}
	
	return 0;
}
