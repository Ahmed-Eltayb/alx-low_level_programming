#include"main.h"

/**
 * _isalpha - checks for lowercase character.
 * @c: is an input
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
		else
		{
			if (c >= 'a' && c <= 'z')
			{
				return (1);
			}
			else
			{
				return (0);
			}
		}
}
