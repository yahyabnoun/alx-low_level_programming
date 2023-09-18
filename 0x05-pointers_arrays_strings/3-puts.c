#include "main.h"
/**
* _puts - print string
* @str: string
* void function.
*/
void _puts(char *str)
{
int len = 0;

while (*str != '\0')
{
_putchar(*str);
str++;
len++;
}
_putchar('\n');
}
