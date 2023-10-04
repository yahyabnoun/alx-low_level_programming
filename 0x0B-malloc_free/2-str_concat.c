#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
/**
 * str_concat - str_concat
 * @s1: string
 * @s2: string
 *
 * Return: pointer.
 */
char *str_concat(char *s1, char *s2)
{
char *t;
int i, size;

if (s1 == NULL)
{
return (NULL);
}
size = strlen(s1) ;

t = (char *)malloc((sizeof(char) * size) +1);

if (t == NULL)
{
return (NULL);
}
else
{
for (i = 0; s1[i] != '\0'; i++)
t[i] = s1[i];

for (i = 0; s2[i] != '\0'; i++)
t[size+i] = s2[i];
}
t[size+i]= '\0';
return (t);
}
