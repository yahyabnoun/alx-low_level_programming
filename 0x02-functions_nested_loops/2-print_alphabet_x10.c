#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
 	char AL = 'a';
 	int  in = 0;
	while (in <= 0)
		{
		while (AL <= 'z')
		{
			_putchar(AL);
			AL++;
		}
		_putchar('\n');
		in++;
	}

}
