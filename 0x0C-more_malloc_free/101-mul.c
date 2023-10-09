#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define ERR_MSG "Error"

/**
 * is_digit - checks if a string contains a non-digit char
 * @s: string to be evaluated
 *
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, len, i, carry, digit1, digit2, *ptr, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
	{
		printf("Error\n");
		exit(98);
	}
	len1 = strlen(s1), len2 = strlen(s2), len = len1 + len2 + 1;
	ptr = malloc(sizeof(int) * len);
	if (!ptr)
		return (1);
	for (i = 0; i <= len1 + len2; i++)
		ptr[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = s1[len1] - '0', carry = 0;
		for (len2 = strlen(s2) - 1; len2 >= 0; len2--)
		{
			digit2 = s2[len2] - '0';
			carry += ptr[len1 + len2 + 1] + (digit1 * digit2);
			ptr[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			ptr[len1 + len2 + 1] += carry;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (ptr[i])
			a = 1;
		if (a)
			_putchar(ptr[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(ptr);
	return (0);
}
