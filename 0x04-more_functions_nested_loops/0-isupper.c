#include"main.h"

/**
 * _isupper - checks for uppercase character.
 * @c: is an input
 * Return: 1 if upper ,0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
