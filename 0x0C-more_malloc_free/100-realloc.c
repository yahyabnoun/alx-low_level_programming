#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * _realloc - function that prints a string, followed by a new line
 * @ptr: The string to print
 * @old_size: The string to print
 * @new_size: The string to print
 *
 * Return: nothing.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	ptr = realloc(ptr, new_size);

	return (ptr);
}
