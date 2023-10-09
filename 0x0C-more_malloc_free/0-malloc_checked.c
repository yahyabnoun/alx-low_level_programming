#include <stdlib.h>
#include <string.h>

/**
 * malloc_checked - function that prints a string, followed by a new line
 * @b: The string to print
 *
 * Return: nothing.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}