#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
 	char AL = 'a';
for (int i = 0; i < 10; i++)
{
	while (AL <= 'z')
	{
		_putchar(AL);
		AL++;
	}
	_putchar('\n');
	
}

}
