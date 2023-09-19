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
int b = strlen(s) - 1;
while (i < b)
{
if ((s[i] % 2) == 0)
{
_putchar(s[i]);
}
i++;
}
_putchar('\n');
}
