#include"main.h"

/**
 * _strncat - a function that concatenates two strings
 * @dest: copy to
 * @src: copy from
 * @n: input of max bytes to be used
 * Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int copy;

	for (a = 0; dest[a] != '\0'; a++)
	{
	}

	for (copy = 0; copy < n; copy++)
	{
		dest[a + copy] = src[copy];
		if (src[copy] == '\0')
		{
			copy = n;
		}
	}

	return (dest);
}
