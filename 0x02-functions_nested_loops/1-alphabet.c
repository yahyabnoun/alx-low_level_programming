#include "main.h"
/**
 * print_alphabet - Entry point
 *
 * Return: Always 0 (Success)
*/
void print_alphabet(void)
{
	char AL = 'a';

	while (AL <= 'z')
	{
		_putchar(AL);
		AL++;
	}
	_putchar('\n');
}
