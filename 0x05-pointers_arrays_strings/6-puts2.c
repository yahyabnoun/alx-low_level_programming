#include "main.h"

/**
 * puts2 - function that reverses a string.
 * @s: the string
 *
 * prints a string
 */
void puts2(char *s)
{

while ( *s )
{
if(*s%2 == 0) 
    _putchar(*s);
s++;
}
_putchar('\n');
}