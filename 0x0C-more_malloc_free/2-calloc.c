#include<stdlib.h>
#include<stdio.h>
#include"main.h"

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: input for size
 * @size: input number for data
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *pointer;
	unsigned int i;

	if (nmemb <= 0 || size <= 0)
	{
		return (NULL);
	}

	pointer = malloc(nmemb * size);
	if (pointer == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < nmemb * size; i++)
	{
		*((char *)pointer + i) = 0;
	}

	return (pointer);
}
