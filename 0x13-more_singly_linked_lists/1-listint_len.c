#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * listint_len - function that returns the number of
 * elements in a linked listint_t list
 * @h: list
 * Return: number of nodes in list
 */

size_t listint_len(const listint_t *h)
{
	size_t numNodes = 0;

	while (h != NULL)
	{
		numNodes += 1;
		h = h->next;
	}

	return (numNodes);
}
