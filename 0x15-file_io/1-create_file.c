#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: name for the file
 * @text_content: content to add
 * Return: 1
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	int n_wrote;

	if (!filename)
	{
		return (-1);
	}

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
	{
		return (-1);
	}

	if (!text_content)
	{
		close(file);
		return (1);
	}

	n_wrote = write(file, text_content, _strlen(text_content));
	if (n_wrote == -1 || n_wrote != _strlen(text_content))
	{
		close(file);
		return (-1);
	}

	close(file);
	return (1);
}
