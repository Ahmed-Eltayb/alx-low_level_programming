#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int A;
	int B;
	int a;
	int b;

	for (A = '0'; A <= '9'; A++)
	{
		for (B = '0'; B <= '9'; B++)
		{
			for (a = '0'; a <= '9'; a++)
			{
				for (b = B + 1; b <= '9'; b++)
				{
					putchar(A);
					putchar(B);
					putchar(' ');
					putchar(a);
					putchar(b);
					putchar(',');
					putchar(' ');

				}
				if (a == '1')
				{
					b = '0';
				}

			}
		}
	}
	putchar('\n');

	return (0);
}
