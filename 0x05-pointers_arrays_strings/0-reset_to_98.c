#include"main.h"
/**
 * reset_to_98 - function that takes a pointer
 * and updates the value it points to to 98.
 *
 * @n: input number
 * @*p: pointer that have the address of n
 */
void reset_to_98(int *n)
{
	int *p = &n;

	*p = 98;
	return (0);
}
