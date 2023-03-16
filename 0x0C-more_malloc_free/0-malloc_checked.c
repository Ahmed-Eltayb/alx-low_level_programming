#include<stdio.h>
#include<stdlib.h>
#include"main.h"

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: input number
 * Return: poniter
 */

void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);

	if (pointer == NULL)
	{
		exit(98);
	}

	return (pointer);
}
