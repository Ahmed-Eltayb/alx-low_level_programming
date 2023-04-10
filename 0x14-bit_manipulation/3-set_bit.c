#include "main.h"
#include <stdlib.h>

/**
 * set_bit - function that sets the value of
 * a bit to 1 at a given index.
 * @n: number
 * @index: index
 * Return: 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int max_bits;
	unsigned long int mask = 1;

	max_bits = (sizeof(unsigned long int) * 8);

	if (index > max_bits)
	{
		return (-1);
	}

	mask <<= index;
	*n = (*n | mask);

	return (1);
}
