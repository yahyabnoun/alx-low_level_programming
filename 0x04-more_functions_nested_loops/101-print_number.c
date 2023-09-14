#include <stdio.h>
#include "main.h"
/**
 * print_number - prints integers
 * @n: Accepts integer
 *
 * Return: Nothing (always)
 */
void print_number(int n)
{
	unsigned int number;
	unsigned int c;
	unsigned int total;

	if (n < 0)
	{	number = n * -1;
		_putchar('-');
	}
	else
	{
		number = n;
	}

	c = 1;
	total = number;

	while (total > 9)
	{
		total = total / 10;
		c *= 10;
	}

	for (c = c; c >= 1; c /= 10)
	{
		_putchar('0' + ((number / c) % 10));
	}
}
