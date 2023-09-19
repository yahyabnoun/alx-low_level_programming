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
int i;
int b = strlen(s);
i = (strlen(s)-1)/2;

for (; i < b ; i++)
{
_putchar(s[i]);
}
_putchar('\n');
}
