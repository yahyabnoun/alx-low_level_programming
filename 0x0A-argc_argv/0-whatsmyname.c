#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints its name, followed by a new line.
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
while (argc--)
printf("%s\n", *argv++);

return (0);
}
