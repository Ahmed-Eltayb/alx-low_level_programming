#include"main.h"

/**
 * print_alphabet_x10 - prints from a to z x10
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char a = 'a';
	int b = 0;

	while (b <= 9)
	{
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		b++;
	}
}
