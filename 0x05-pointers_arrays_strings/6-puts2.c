#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts2 - function that reverses a string.
 * @s: the string
 *
 * prints a string
 */
void puts2(char *s)
{
int i = 0;
int b = strlen(s);
for (; i < b ; i = i + 2)
{
_putchar(s[i]);
}
_putchar('\n');
}
