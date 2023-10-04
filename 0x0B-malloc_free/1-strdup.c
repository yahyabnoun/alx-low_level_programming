#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
/**
 * _strdup - _strdup
 * @str: string
 *
 * Return: pointer.
 */
char *_strdup(char *str)
{
char *t;
unsigned int i;
t = (char *)malloc(sizeof(char) * (strlen(str) - 1));

if (t == NULL || *str == '')
{
return (NULL);
}
else
{
for (i = 0; str[i] != '\0'; i++)
t[i] = str[i];
}
return (t);
}
