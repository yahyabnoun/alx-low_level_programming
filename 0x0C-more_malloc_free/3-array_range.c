#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * array_range - function that prints a string, followed by a new line
 * @min: The string to print
 * @max: The string to print
 *
 * Return: nothing.
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, j = 0, len = min;

	if (min > max)
	{
		return (NULL);
	}
	len = max - min + 1;
	ptr = malloc(sizeof(int) * len);
	if (!ptr)
	{
		return (NULL);
	}
	for (i = min; i <= max; i++)
	{
		ptr[j] = i;
		j++;
	}
	return (ptr);
}
