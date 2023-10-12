#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - Prints strings passed to the function separed by separators
 * @separator: A string that is used to separate strings
 * @n: number of unnamed parameters
 * Return: Always 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;
va_start(ap, n);
if (separator == NULL)
separator = "";
for (i = 0; i < n; i++)
{
printf("%s", va_arg(ap, char*));
if (separator != NULL && i < n - 1)
printf("%s", separator);
}
printf("\n");
va_end(ap);
}
