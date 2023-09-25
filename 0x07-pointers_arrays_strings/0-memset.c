#include "main.h"
#include <stdio.h>
/**
 * _memset - _memset
 * @s: the address of memory to print
 * @b: the size of the memory to print
 * @n: the size of the memory to print
 *
 * Return: Nothing.
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int t = 0;

for (; (s[t] != '\0' || t < n) ; t++)
{
s[t] = b;
}
return (s);
}
