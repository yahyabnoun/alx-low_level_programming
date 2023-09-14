#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 (Always)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i != 1)
		{
			printf(" ");
		}
		if ((i % 3 == 0 || i % 5 == 0) && i != 0)
		{
			if (i % 3 == 0)
			{
				printf("Fizz");
			}
			if (i % 5 == 0)
			{
				printf("Buzz");
			}
		}
		else
		{
			printf("%d", i);
		}
	}
	printf("\n");
	return (0);
}

