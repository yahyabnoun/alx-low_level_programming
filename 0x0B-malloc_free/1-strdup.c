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
int size = strlen(str) - 1;
t = (char *)malloc(sizeof(char) * size);

if (t == NULL || str == NULL)
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
