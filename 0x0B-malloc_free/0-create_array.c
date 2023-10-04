#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create_array
 * @c: string
 * @size: the size of the memory to print
 *
 * Return: pointer.
 */
char *create_array(unsigned int size, char c)
{
char *t;
unsigned int i;
t = (char *)malloc(sizeof(char) * size);

if (t == NULL || size == 0)
{
return (NULL);
}
else
{
for (i = 0; i < size; i++)
t[i] = c;
}
return (t);
}
