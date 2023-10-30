#include "main.h"
#include <string.h>

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int o, w, len = 0;

	if (!filename)
		return (-1);
	if (text_content != NULL)
	{
		len = strlen(text_content);
	}
	o = open(filename, O_WRONLY | O_APPEND);

	w = write(o, text_content, len);
	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
