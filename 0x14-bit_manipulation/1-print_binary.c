#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_binary - function that prints
 * the binary representation of a number
 * @n: unsigned int
 */
void print_binary(unsigned long int n)
{

	int len = 0;
	unsigned long int n_copy = n;
	unsigned long int mask = 1;

	while (n_copy > 0)
	{
		len++;
		n_copy >>= 1;
	}
	len -= 1;

	if (len > 0)
	{
		mask = mask << len;
	}

	while (mask > 0)
	{
		if (n & mask)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}

		mask >>= 1;
	}
}
