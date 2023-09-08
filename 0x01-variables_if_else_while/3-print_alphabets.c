#include <stdio.h>
/**
 * main - alphabets
 *
 * Return: 0
 */
int main(void)
{
	char letter = 'a';
	char letter1 = 'A';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	while (letter1 <= 'Z')
	{
		putchar(letter1);
		letter1++;
	}
	putchar('\n');
	return (0);
}
