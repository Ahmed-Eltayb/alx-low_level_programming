#include "main.h"
#include <stdlib.h>

/**
 * flip_bits - function that returns the number of bits
 * you would need to flip to get from one number to another.
 * @n: number
 * @m: number2
 * Return: bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits = 0;
	unsigned long int diff;

	diff = n ^ m;

	do {
		bits += (diff & 1);
		diff >>= 1;
	} while
		(diff > 0);

	return (bits);
}
