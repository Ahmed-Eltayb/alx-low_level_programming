#include"main.h"
/**
 * test_root - test n^2
 * @n: input number
 * @root: input root
 * Return: root , -1
 */

int test_root(int n, int root)
{
	if (root * root > n)
	{
		return (-1);
	}

	if (root * root == n)
	{
		return (root);
	}

	return (test_root(n, root + 1));
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: input number
 *
 * Return: natural square root, -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (test_root(n, 0));
}
