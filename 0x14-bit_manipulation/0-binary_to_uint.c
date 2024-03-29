#include "main.h"
#include <stdlib.h>
/**
 * binary_to_uint - function that converts a
 * binary number to an unsigned int
 * @b: binary
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{

	int len = 0;
	int i;
	unsigned int sum = 0;

	if (b == NULL)
	{
		return (sum);
	}
	while (b[len] != '\0')
	{
		len++;
	}

	len -= 1;

	i = 0;

	while (b[i])
	{
		if ((b[i] != '0') && (b[i] != '1'))
		{
			return (sum);
		}

		if (b[i] == '1')
		{
			sum += (1 * (1 << len));
		}
		i++;
		len--;
	}

	return (sum);
}
