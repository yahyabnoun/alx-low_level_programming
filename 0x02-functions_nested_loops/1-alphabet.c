#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
void print_alphabet(void)
{
	char AL = 'a';

	while (AL<='z')
	{
		_putchar(AL);
		AL++;
	}
	_putchar('\n');
	
	

	return (0);
}