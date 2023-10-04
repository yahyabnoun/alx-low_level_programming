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
int i, size;

if (str == NULL)
{
return (NULL);
}
size = strlen(str);

t = (char *)malloc((sizeof(char) * size) +1);

if (t == NULL)
{
return (NULL);
}
else
{
for (i = 0; str[i] != '\0'; i++)
t[i] = str[i];
}
t[i] = '\0';
return (t);
}
