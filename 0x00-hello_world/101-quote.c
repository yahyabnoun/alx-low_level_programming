#include <stdio.h>
#include <unistd.h>
#include <string.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
*/
int main(void)
{
	char mes[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, mes, strlen(mes));
	return (1);
}
