#include<stdio.h>

int main()
{	
	printf("Program to display if character is vowel or consonant\n");
	char ch;
	printf("Enter a Character: \n");
	scanf("%c", &ch);
	if((ch == 97)||(ch == 101)||(ch == 105)||(ch == 111)||(ch == 117))
	{
		printf("%c is a vowel\n", ch);
	}
	else
	{
		printf("%c is a consonant\n", ch);
	}
	return 0;
}
