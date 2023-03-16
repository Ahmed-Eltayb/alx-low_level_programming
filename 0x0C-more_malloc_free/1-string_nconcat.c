#include<stdlib.h>
#include<stdio.h>
#include"main.h"
/**
 * string_nconcat - function that concatenates two strings.
 * @s1: input
 * @s2: input
 * @n: s2's number of bytes
 * Return: concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *co_s;
	unsigned int i, j, co, co_2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
	{
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
	}

	if (n < j)
		j = n;

	j += i;
	co_s = malloc(sizeof(char *) * (j + 1));

	if (co_s == NULL)
		return (NULL);

	for (co = 0; co < i; co++)
		co_s[co] = s1[co];
	for (co_2 = 0; co < j; co_2++)
	{
		co_s[co] = s2[co_2];
		co++;
	}
	co++;
	co_s[co] = '\0';
	return (co_s);
}
