#include"main.h"

/**
 * _strncpy - a function that concatenates two strings
 * @dest: string
 * @src: input string to add
 * @n: input of max bytes to be used
 * Return: concatenated string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
	{
		if (a < n)
		{
			dest[a] = src[a];
		}
		while (a < n)
		{
			dest[a++] = '\0';
		}
	}
	return (dest);
}
