#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a = 'a';

	char capital = 'A';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	while (capital <= 'Z')
	{
		putchar(capital);
		capital++;
	}
	putchar('\n');

return (0);
}
