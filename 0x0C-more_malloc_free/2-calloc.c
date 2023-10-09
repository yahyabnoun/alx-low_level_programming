#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * *_memset - fills memory with a constant byte
 * @s: memory area
 * @b: char to copy
 * @n: n time b copied
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
/**
 * _calloc - function that prints a string, followed by a new line
 * @nmemb: The string to print
 * @size: The string to print
 *
 * Return: nothing.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}
	ptr = malloc(size * nmemb);

	if (!ptr)
	{
		return (NULL);
	}
	_memset(ptr, 0, nmemb * size);
	return (ptr);
}
