#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * string_nconcat - function that prints a string, followed by a new line
 * @s1: The string to print
 * @s2: The string to print
 * @n: The string to print
 *
 * Return: nothing.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (n >= strlen(s2))
		ptr = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
	else
		ptr = malloc(sizeof(char) * (strlen(s1) + n + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < n && s2[j] != '\0'; j++)
	{
		ptr[i] = s2[j];
		i++;
	}

	ptr[i] = '\0';
	return (ptr);
}
