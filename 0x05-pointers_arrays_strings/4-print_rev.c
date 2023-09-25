#include "main.h"
/**
 * print_rev - function that prints a string, in reverse
 * @s: the string
 *
 * prints a string
 */
void print_rev(char *s)
{
  int len = 0;
  while (s[len] != '\0')
  {
    len++;
  }

  while (len)
  {
    _putchar(s[len - 1]);
    len--;
  }
  _putchar('\n');
}
