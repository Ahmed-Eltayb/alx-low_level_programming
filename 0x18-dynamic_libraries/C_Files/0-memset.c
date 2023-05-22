#include"main.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @s: pointer to memory
 * @b: value
 * @n: number of bytes
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{

	int size = n;

	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			s[i] = b;
		}
	}

	return (s);
}
