#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: make combinations of 2 numbers (that range from 0 to 99)
 *
 * Return: 0 if successful
 */
int main(void)
{
	int iOuter = 0;
	int iInner = 0;

	while (iOuter <= 99)
	{
		while (iInner <= 99)
		{
			if (iInner <= iOuter)
			{
				iInner++;
				continue;
			}
			putchar((iOuter / 10) + 48);
			putchar((iOuter % 10) + 48);
			putchar(' ');
			putchar((iInner / 10) + 48);
			putchar((iInner % 10) + 48);
			if (!(iOuter == 98 && iInner == 99))
			{
				putchar(',');
				putchar(' ');
			}
			iInner++;
		}
		iInner = 0;
		iOuter++;
	}
	putchar('\n');
	return (0);
}
