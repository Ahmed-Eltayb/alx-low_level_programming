#include"main.h"
#include <stdio.h>
/**
 * print_diagsums - function that prints the sum
 * of the two diagonals of a square matrix of integers.
 * @a: input
 * @size: input
 */

void print_diagsums(int *a, int size)
{

	int sum1 = 0;
	int sum2 = 0;
	int row;
	int i;

	for (row = 0; row < size; row++)
	{
		i = (row * size) + row;
		sum1 += a[i];
	}

	for (row = 1; row <= size; row++)
	{
		i = (row * size) - row;
		sum2 += a[i];
	}

	printf("%d, %d\n", sum1, sum2);

}
