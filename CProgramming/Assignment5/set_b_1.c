#include<stdio.h>
#include <math.h>

int main()
{
	printf("Program to print prime numbers between the given numbers.\n");
    int i, sum, num, count = 1 ,r;
    printf("All Armstrong number between 1 and 500 are:\n");

    while (count<= 500) {
        num = count;
		sum = 0;
        while (num)
		{
            r = num % 10;
			sum = sum+r*r*r;
            num = num/10;
        }
     
        if (count == sum) {
            printf("%d ", count);
        }
        count++;
	}
	printf("\n");
}

