#include<stdlib.h>
#include<stdio.h>
#include<time.h>
/**
* main - if statement
*
* Return: 0
*/
int main(void)
{
	int n;
	int lDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lDigit = n % 10;
	if (lDigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lDigit);
	}
	else if (lDigit < 6 && lDigit != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lDigit);
	}
	else
	{
		printf("Last digit of %d is 0 and is 0\n", n);
	}
	return (0);
}

