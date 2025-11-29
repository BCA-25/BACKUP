#include<stdio.h>

int main()
{	
	printf("Program to display digit in words.\n");
	char ch;
	printf("Enter a digit:\n");
	scanf("%c", &ch);
	switch (ch)
	{
		case '1':
			printf("One\n");
			break;
		case '2':
			printf("Two\n");
			break;
		case '3':
			printf("Three\n");
			break;
		case '4':
			printf("Four\n");
			break;
		case '5':
			printf("Five\n");
			break;
		case '6':
			printf("Six\n");
			break;
		case '7':
			printf("Seven\n");
			break;
		case '8':
			printf("Eight\n");
			break;
		case '9':
			printf("Nine\n");
			break;
		case '0':
			printf("Zero\n");
			break;
		default:	
			printf("Invaid Digit\n");
			break;
	}
	
	return 0;
}	
