#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - function that reverses a string.
 * @s: the string
 *
 * prints a string
 */
void rev_string(char *s)
{
int end = strlen(s) - 1;
int start = 0;
char str;

while (start < end)
{
str = s[start];
s[start] = s[end];
s[end] = str;
start++;
end--;
}
}
