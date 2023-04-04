#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of
 * a listint_t linked list.
 * @head: pointer
 * @index: needed node
 * Return: node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	while ((i < index) && head != NULL)
	{
		head = head->next;
		i++;
	}

	if (i == index)
	{
		return (head);
	}

	return (NULL);
}
