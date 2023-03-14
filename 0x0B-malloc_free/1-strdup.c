#include"main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * _strdup - function that returns a pointer to
 * a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: input char
 * Return: pointer
 */

char *_strdup(char *str)
{
	char *array;
	int i = 0;
	int len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (*(str + i))
	{
		len++, i++;
	}
	len++;
	
	array = malloc(sizeof(char) * len);

	if (array == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < len)
	{
		*(array + i) = *(str + i);
		i++;
	}

	return (array);
}
