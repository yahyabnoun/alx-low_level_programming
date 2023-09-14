#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 if successful
 */
int main(void)
{
	long int number;
	long int prime;

	number = 612852475143;
	for (prime = 2; prime <= number; prime++)
	{
		if (number % prime == 0)
		{
			number /= prime;
			prime = prime - 1;
		}
	}
	printf("%ld\n", prime);

	return (0);
}
