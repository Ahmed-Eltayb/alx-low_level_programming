#include <stdlib.h>

/**
 * print_name - function that prints a name.
 * @name: pointer name
 * @f: input function
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
