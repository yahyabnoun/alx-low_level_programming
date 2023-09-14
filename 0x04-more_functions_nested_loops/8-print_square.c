#include "main.h"
/**
 * print_square - prints a square of x-height and x-width (basically a square)
 * with hashtags.
 * @size: size of the square that should be printed
 *
 * Return: Nothing (always)
 */
void print_square(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

