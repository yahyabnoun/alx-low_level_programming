#include "main.h"
/**
 * print_rev - function that prints a string, in reverse
 * @s: the string
 *
 * prints a string
 */
void rev_string(char *s)
{
int end = 0;
int start = 0;

char str ;
while (s[end] != '\0')
{
end++;
}
end--;
while (end)
{
str = s[start];
s[start] = s[end];
s[end] = str;
start++;
end--;
}
}
