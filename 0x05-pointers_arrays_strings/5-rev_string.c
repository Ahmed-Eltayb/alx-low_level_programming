#include "main.h"

/**
 * rev_string - a function that reverses a string
 *
 * @s: input string
 *
 * Return: string and in reverse
 */
void rev_string(char *s)
{
	char reverse = s[0];
	int string_counter = 0;
	int i;

	while (s[string_counter] != '\0')
	{
		string_counter++;
	}

	for (i = 0; i < string_counter; i++)
	{
		string_counter--;
		reverse = s[i];
		s[i] = s[string_counter];
		s[string_counter] = reverse;
	}
}
