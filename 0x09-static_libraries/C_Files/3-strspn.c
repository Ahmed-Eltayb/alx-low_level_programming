#include"main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: input
 * @accept: input
 * Return: match
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	int n;
	int match;
	int check;

	match = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		check = 0;

		for (n = 0; accept[n] != '\0'; n++)
		{
			if (accept[n] == s[i])
			{
				match++;
				check = 1;
			}
		}

		if (check == 0)
		{
			return (match);
		}
	}

	return (match);
}
