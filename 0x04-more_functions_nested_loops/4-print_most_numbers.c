#include "main.h"
/**
 * print_most_numbers - prints all numbers except 2 and 4
 *
 * Return: Nothing (always)
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (!(i == ('0' + 2) || i == ('0' + 4)))
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}

