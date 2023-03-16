#include<stdio.h>
#include<stdlib.h>
#include"main.h"

/**
 * array_range - function that creates an array of integers
 * @min: input for min
 * @max: input number for max
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int *pointer;
	int i;
	int n = (max - min + 1);

	if (min > max)
	{
		return (NULL);
	}

	pointer = malloc(sizeof(int) * n);

	if (pointer == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < n; i++)
	{
		pointer[i] = min++;
	}

	return (pointer);
}
