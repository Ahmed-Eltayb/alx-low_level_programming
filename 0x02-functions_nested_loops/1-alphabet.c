#include"main.h"

/**
 * print_alphabet - prints from a to z
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
