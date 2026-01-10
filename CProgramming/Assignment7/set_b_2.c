#include<stdio.h>
#include<ctype.h>

int Charcheck(char c);

int main()
{
	printf("Program to count number of alphabets and digits entered\n");
	char c;
	int digit = 0, alpha = 0, special= 0;
	c = getchar();
	while(c != EOF)
	{	
		switch(Charcheck(c))
		{
			case 1:
				alpha++;
				break;	
			case 2:
				digit++;
				break;
			case 3:
				special++;
				break;
			default:	
				break;
				
		}
		c = getchar();
	}
	printf("Total no of Alphabets is = %d\n", alpha);
	printf("Total no of Digits is = %d\n", digit);
	printf("Total no of Special characters is = %d\n", special);	
	printf("Program Terminated.\n");
		
	
	return 0;
}


int Charcheck(char c)
{
	
	if(isalpha(c)){
	return 1;
	}
	if(isdigit(c)){
	return 2;
	}
	if(ispunct(c)){
	return 3;
	}
	//return 0;
}
