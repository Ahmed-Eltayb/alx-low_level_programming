#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it to
 * the POSIX standard output.
 * @filename: file to read
 * @letters: size to read
 * Return: size printer
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t n_read;
	ssize_t n_wrote;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}

	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}
	n_read = read(file, buffer, letters);
	if (n_read == -1)
	{
		free(buffer);
		close(file);
		return (0);
	}

	n_wrote = write(STDOUT_FILENO, buffer, n_read);
	if (n_wrote == -1)
	{
		free(buffer);
		close(file);
		return (0);
	}

	close(file);
	return (n_read);

}
