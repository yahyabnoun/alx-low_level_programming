#include <stdio.h>
/**
* main - print base
*
* Return: 0
*/
int main(void)
{
	char hexDigit = '0';

	while (hexDigit <= 'f')
	{
		putchar(hexDigit);
		hexDigit++;
		if (hexDigit == ':')
		{
			hexDigit = 'a';
		}
	}
	putchar('\n');
	return (0);
}
