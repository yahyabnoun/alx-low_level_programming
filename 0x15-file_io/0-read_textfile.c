#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytes;
	char *buffer;
	int fp;

	if (filename == NULL || !letters)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fp = open(filename, O_RDONLY);


	if (fp == -1)
	{
		free(buffer);
		return (0);
	}
	bytes = read(fp, buffer, letters);
	bytes = write(STDOUT_FILENO, buffer, bytes);
	if (bytes == -1)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(fp);

	return (bytes);
}
