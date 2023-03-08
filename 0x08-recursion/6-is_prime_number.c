#include"main.h"
/**
 * check_prime - checking n if prim
 * @n: input number
 * @divisor: divisor
 * Return: 1 if prime, 0 otherwise
 */

int check_prime(int n, int divisor)
{
	if (n == divisor)
	{
		return (1);
	}
	if (n % divisor == 0)
	{
		return (0);
	}
	return (check_prime(n, divisor + 1));

}

/**
 * is_prime_number -  function that returns 1 if the input integer
 * is a prime number, otherwise return 0.
 * @n: input number
 * Return: 1 if prime, 0 otherwise
 */

int is_prime_number(int n)
{
	int divisor = 3;

	if (n % 2 == 0 || n < 2)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}

	return (check_prime(n, divisor));
}
