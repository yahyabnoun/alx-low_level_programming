#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts2 - function that reverses a string.
 * @s: the string
 *
 * prints a string
 */
void puts_half(char *s)
{
int i = strlen(s)/2;
int b = strlen(s);
for (; i < b ; i++)
{
_putchar(s[i]);
}
_putchar('\n');
}