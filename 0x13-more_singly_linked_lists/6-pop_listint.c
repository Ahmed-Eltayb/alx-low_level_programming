#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"


/**
 * pop_listint - function that deletes the head node of
 * a listint_t linked list, and returns the head node’s data (n).
 * @head: list
 * Return: data added
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *tmp;

	if (*head == NULL)
	{
		return (0);
	}

	tmp = *head;

	data = tmp->n;

	*head = tmp->next;

	free(tmp);

	return (data);

}
