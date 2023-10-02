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
if (argc >= 3)
printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
else
printf("%s\n", "Error");
return (0);
}
