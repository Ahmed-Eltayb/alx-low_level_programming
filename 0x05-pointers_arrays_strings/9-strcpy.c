#include "main.h"

/**
 * char *_strcpy - function that copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest.
 *
 * @dest: pointer to copy to
 * @src: pointer to copy from
 * Return: value of the copied string
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
