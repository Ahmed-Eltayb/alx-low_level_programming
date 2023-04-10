#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - function that sets the value
 * of a bit to 0 at a given index
 * @n: number
 * @index: index
 * Return: 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int max_bits;
	unsigned long int mask = 1;

	max_bits = (sizeof(unsigned long int) * 8);

	if (index > max_bits)
	{
		return (-1);
	}

	mask = ~(mask << index);
	*n = (*n & mask);

	return (1);
}
