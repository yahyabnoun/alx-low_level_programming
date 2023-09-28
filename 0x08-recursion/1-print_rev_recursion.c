#include "main.h"
/**
 * _print_rev_recursion - _print_rev_recursion
 * @s: the address of memory to print
 * Return: Nothing.
 */
void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
